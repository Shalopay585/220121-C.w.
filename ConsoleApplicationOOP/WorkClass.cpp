#include "WorkClass.h"
void WorkClass::startWork() {
    std::cout << "Hello ������ World!\n";



    GoodBasic* universalPointer01 = new Chips;
    GoodBasic* universalPointer02 = new Freezer(1, 234, "Freezer Samsung", "Good thing...", 2, 34);
    static_cast<Chips*>(universalPointer01)->toString();
    static_cast<Freezer*>(universalPointer02)->toString();



	/*Freezer freezer01(1, 234, "Freezer Samsung", "Good thing...", 2, 34);
	Freezer* pointerFreezer01 = &freezer01;

    GoodBasic* universalPointer01 = new GoodBasic;
    GoodBasic* universalPointer02 = new Freezer(1, 234, "Freezer Samsung", "Good thing...", 2, 34);
    GoodBasic* universalPointer03 = new Software(1, 234, "Soft FOR Samsung", "Very Good thing...", 2, 34);

    static_cast<GoodBasic*>(universalPointer01)->toString();
    static_cast<GoodBasic*>(universalPointer02)->toString();
    static_cast<GoodBasic*>(universalPointer03)->toString();*/
}