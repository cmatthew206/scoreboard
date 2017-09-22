void selectTime()
{
  setLumosity(lumosity);
  getTemp();
  printTime(time);
  startState = digitalRead(startstopPin);
  tempMillis = millis();
  
  while(startState == LOW)
  {
    //read button states (only need two because we can only start and add min at this state
    startState = digitalRead(startstopPin);
    minState = digitalRead(resetPin);
  
    // check score buttons
    scoreButtons(time);
    
    // check add minute state
    if(minState == HIGH)
    {
      tone(buzzPin,700,30);
      delay(200);
      time = addMin(time);
      printTime(time);
      Serial.print("Select @: ");
      Serial.println(time);
      while(minState == HIGH)
      {
        minState = digitalRead(resetPin);
        startState = digitalRead(startstopPin);
        if(startState == HIGH)
        {
          lumosity++;
          if(lumosity > 7)
          {
            lumosity = 1;
          }
          setLumosity(lumosity);
          printTime(time);
          while(startState == HIGH)
          {
            startState = digitalRead(startstopPin);
          }
        }
      }
    }

    // timeout check (turn screen off after 3 min)
    currentMillis = millis();
    if(currentMillis - tempMillis > 180000) {
      matrix.fillScreen(0);
      matrix.swapBuffers(false);
      while(minState == LOW)
      {
        minState = digitalRead(resetPin);
      }
      tempMillis = millis();
    }
  }
  tone(buzzPin,700,30);
  previousMillis = 0;
  count = time;
  delay(300); // debounce start button
  runClock();
}
