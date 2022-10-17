// BlueprintGeneratedClass BP-SUV.BP-SUV_C
// Size: 0x2cff6ac8 (Inherited: 0x2cff6a68)
struct ABP-SUV_C : ABP-DefaultGroundVehicle_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe68(0x08)
	struct UBravoHotelVehicleTireComponent* BravoHotelVehicleTire_RR; // 0xe70(0x08)
	struct UBravoHotelVehicleTireComponent* BravoHotelVehicleTire_RL; // 0xe78(0x08)
	struct UBravoHotelVehicleTireComponent* BravoHotelVehicleTire_FR; // 0xe80(0x08)
	struct UBravoHotelVehicleTireComponent* BravoHotelVehicleTire_FL; // 0xe88(0x08)
	struct UBP-DestructibleComponent_C* BP-DestructibleComponent4; // 0xe90(0x08)
	struct UBP-DestructibleComponent_C* BP-DestructibleComponent3; // 0xe98(0x08)
	struct UBP-DestructibleComponent_C* BP-DestructibleComponent2; // 0xea0(0x08)
	struct UBP-DestructibleComponent_C* BP-DestructibleComponent1; // 0xea8(0x08)
	struct UBravoHotelVehicleSeatComponent* BravoHotelVehicleSeat04; // 0xeb0(0x08)
	struct UBravoHotelVehicleSeatComponent* BravoHotelVehicleSeat03; // 0xeb8(0x08)
	struct UBravoHotelVehicleSeatComponent* BravoHotelVehicleSeat02; // 0xec0(0x08)

	void ReceiveTick(float DeltaSeconds); // Function BP-SUV.BP-SUV_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ReceiveBeginPlay(); // Function BP-SUV.BP-SUV_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_BP-SUV(int32_t EntryPoint); // Function BP-SUV.BP-SUV_C.ExecuteUbergraph_BP-SUV // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

