// WidgetBlueprintGeneratedClass UW-Inventory_SetItemInfo.UW-Inventory_SetItemInfo_C
// Size: 0x2cff6ad8 (Inherited: 0x2cff6a88)
struct UUW-Inventory_SetItemInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UUW-Inventory_SetItemEffect_C* UW-Inventory_SetItemEffect; // 0x290(0x08)
	struct UUW-Inventory_SetItemEffect_C* UW-Inventory_SetItemEffect; // 0x298(0x08)
	struct UUW-Inventory_SetItemMember_C* UW-Inventory_SetItemMember; // 0x2a0(0x08)
	struct UUW-Inventory_SetItemMember_C* UW-Inventory_SetItemMember; // 0x2a8(0x08)
	struct UVerticalBox* VerticalBox_MemberItem; // 0x2b0(0x08)
	struct UVerticalBox* VerticalBox_Options; // 0x2b8(0x08)
	struct FName SetItemKey; // 0x2c0(0x0c)
	struct ABravoHotelCharacter* LocalCharacter; // 0x2d0(0x08)
	char pad_2CFF6AD4[0x4]; // 0x2cff6ad4(0x04)

	void SetSetItem(struct TArray<struct FName>& SetItemKeys); // Function UW-Inventory_SetItemInfo.UW-Inventory_SetItemInfo_C.SetSetItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Inventory_SetItemInfo.UW-Inventory_SetItemInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Inventory_SetItemInfo(int32_t EntryPoint); // Function UW-Inventory_SetItemInfo.UW-Inventory_SetItemInfo_C.ExecuteUbergraph_UW-Inventory_SetItemInfo // (Final|UbergraphFunction) // @ game+0x2bad3b0
};

