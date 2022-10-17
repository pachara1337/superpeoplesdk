// WidgetBlueprintGeneratedClass UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C
// Size: 0x2cff6a48 (Inherited: 0x2cff6a88)
struct UUW-BlackMarket_Slot_Base_C : UUserWidget {
	struct FName ItemRowName; // 0x288(0x0c)
	struct FString ConsoleCommandString; // 0x298(0x10)
	struct FString GiveCount; // 0x2a8(0x10)
	enum class EItemType ItemType; // 0x2b8(0x01)
	struct UImage* Icon; // 0x2c0(0x08)
	bool bSlot; // 0x2c8(0x01)
	int32_t Count; // 0x2cc(0x04)
	struct FName AmmoName; // 0x2d0(0x0c)
	struct FString AmmoCommandString; // 0x2e0(0x10)
	int32_t AmmoCount; // 0x2f0(0x04)
	struct UBravoHotelDevelopmentBlackMarket* BlackmarketMainRef; // 0x2f8(0x08)
	struct FBravoHotelBlackMarketDataType BlackmarketDataInfo; // 0x300(0x138)
	struct TArray<struct FString> ConsoleMultiCommandString; // 0x438(0x10)

	void SetConsoleMultiCommandString(struct TArray<struct FString>& Str); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetConsoleMultiCommandString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemMultiCommand(struct FName ItemRowName, enum class EItemType ItemType, struct TArray<struct FString>& Command); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemMultiCommand // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetData(struct FBravoHotelBlackMarketDataType Data); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetAmmoInfoForWeapon(struct FName AmmoName, int32_t Count); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetAmmoInfoForWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemType(enum class EItemType ItemType); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void RunCommand(); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.RunCommand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetConsoleCommandString(struct FString Str); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetConsoleCommandString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetItemCommand(struct FName ItemRowName, enum class EItemType ItemType, struct FString Command); // Function UW-BlackMarket_Slot_Base.UW-BlackMarket_Slot_Base_C.SetItemCommand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

