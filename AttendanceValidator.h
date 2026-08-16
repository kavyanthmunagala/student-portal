#ifndef ATTENDANCE_VALIDATOR_H
#define ATTENDANCE_VALIDATOR_H

class AttendanceValidator {
public:
    static bool meetsMinimum(double attendance, double minimum = 75.0);
    static bool isValidPercentage(double attendance);
};

#endif
