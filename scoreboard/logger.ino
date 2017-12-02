enum log_levels{ERROR, INFO, DEBUG};
// change this to change the log level
const int LOG_LEVEL = DEBUG;

void log(const char *level, const char *separator, const char *message, va_list args)
{
    printf("[%s] %s", level, separator);
    lprintf(message, args);
}

void tabbedLog(const char *level, const char *message, va_list args)
{
    log(level, "\t", message, args);
}

void printHeader(const char *message)
{
    log("header", "", message, NULL);
}

void error(const char *message, ...)
{
    if (LOG_LEVEL >= ERROR)
    {
        va_list args;
        va_start(args, message);
        tabbedLog("error", message, args);
        va_end(args);
    }
}

void info(const char *message, ...)
{   
    if (LOG_LEVEL >= INFO)
    {
        va_list args;
        va_start(args, message);
        tabbedLog("info", message, args);
        va_end(args);
    }
}

void debug(const char *message, ...)
{
    if (LOG_LEVEL >= DEBUG)
    {
        va_list args;
        va_start(args, message);
        tabbedLog("debug", message, args);
        va_end(args);
    }
}

// void debugf(String message, va_list args)
// {
//     if (LOG_LEVEL >= DEBUG)
//     {
//         break;
//     }
// }
