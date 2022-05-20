#include "payment.h"
#include "package_price.h"
#include "location.h"

class reservation{
    private:
        int reservationNumber;
        int reservationCount;

    public:
        reservation();
        double calculateTotal();
        reservation(int preservationNumber, int preservationCount);
        void displayReservation();
        ~reservation();
};
