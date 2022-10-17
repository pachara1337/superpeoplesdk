// WidgetBlueprintGeneratedClass UW-BlackMarket_Main.UW-BlackMarket_Main_C
// Size: 0x2cff6a2d (Inherited: 0x2cff6a28)
struct UUW-BlackMarket_Main_C : UBravoHotelDevelopmentBlackMarket {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UButton* AllItem; // 0x330(0x08)
	struct UButton* Button; // 0x338(0x08)
	struct UCheckBox* CheckBox; // 0x340(0x08)
	struct UCanvasPanel* CP-Column; // 0x348(0x08)
	struct UImage* IMG-Ammo; // 0x350(0x08)
	struct UImage* IMG-Attachment; // 0x358(0x08)
	struct UImage* IMG-Consumable; // 0x360(0x08)
	struct UImage* IMG-Custom; // 0x368(0x08)
	struct UImage* IMG-Gear; // 0x370(0x08)
	struct UImage* IMG-Perk; // 0x378(0x08)
	struct UImage* IMG-Preset; // 0x380(0x08)
	struct UImage* IMG-TopBG; // 0x388(0x08)
	struct UImage* IMG-Vehicle; // 0x390(0x08)
	struct UImage* IMG-Weapon; // 0x398(0x08)
	struct UImage* IMG-Wearable; // 0x3a0(0x08)
	struct UTextBlock* Text_culture; // 0x3a8(0x08)
	struct UUW-BlackMarket_Character_C* UW-BlackMarket_Character; // 0x3b0(0x08)
	struct UUW-BlackMarket_SubTab_C* UW-BlackMarket_SubTab; // 0x3b8(0x08)
	struct UWrapBox* WB-ItemList; // 0x3c0(0x08)
	struct UWrapBox* WrapBox; // 0x3c8(0x08)
	enum class EBlackmarketTabType CurrentTab; // 0x3d0(0x01)
	struct FLinearColor SelectTabColor; // 0x3d4(0x10)
	struct FLinearColor UnSelectTabColor; // 0x3e4(0x10)
	bool ShowWorkInProcess; // 0x3f4(0x01)
	struct TArray<struct FInventoryItemDetailInfo> ItemList; // 0x3f8(0x10)
	enum class EWeaponType SelectedWeaponSubTab; // 0x408(0x01)
	enum class EWeaponAttachmentType SelectedAttachmentSubTab; // 0x409(0x01)
	enum class EWearableItemType SelectedWearableSubTab; // 0x40a(0x01)
	enum class EWearableItemType SelectedGearSubTab; // 0x40b(0x01)
	enum class EWearableItemType SelectedCustomSubTab; // 0x40c(0x01)
	struct TArray<int32_t> SortTypeList; // 0x410(0x10)
	struct TArray<bool> WeaponAscendList; // 0x420(0x10)
	int32_t CurrentWeaponSortType; // 0x430(0x04)
	struct TArray<bool> AmmoAscendList; // 0x438(0x10)
	int32_t CurrentAmmoSortType; // 0x448(0x04)
	struct TArray<bool> AttachmentAscendList; // 0x450(0x10)
	int32_t CurrentAttachmentSortType; // 0x460(0x04)
	int32_t CurrentWearableSortType; // 0x464(0x04)
	int32_t CurrentConsumableSortType; // 0x468(0x04)
	int32_t CurrentCustomSortType; // 0x46c(0x04)
	int32_t CurrentVehicleSortType; // 0x470(0x04)
	struct TArray<bool> WearableAscendList; // 0x478(0x10)
	struct TArray<bool> ConsumableAscendList; // 0x488(0x10)
	struct TArray<bool> CustomAscendList; // 0x498(0x10)
	struct TArray<bool> VehicleAscendList; // 0x4a8(0x10)
	struct UBP-BlackmarketSaveGame_C* SaveData; // 0x4b8(0x08)
	struct TArray<bool> GearAscendList; // 0x4c0(0x10)
	int32_t CurrentGearSortType; // 0x4d0(0x04)
	struct FString BlackmarketSaveSlotName; // 0x4d8(0x10)
	int32_t TestIndex; // 0x4e8(0x04)
	struct TArray<bool> PerkAscendList; // 0x4f0(0x10)
	int32_t CurrentPerkSortType; // 0x500(0x04)
	enum class EPerkSlotFlag SelectedPerkSubTab; // 0x504(0x01)
	int32_t CurrentPresetSortType; // 0x508(0x04)
	struct TArray<bool> PresetAscendList; // 0x510(0x10)
	struct FName SelectedPerkClass; // 0x520(0x0c)
	enum class EItemType SelectedConsumableSubTab; // 0x52c(0x01)

	void IsCorrectPresetSlot(enum class EDevelopmentStatus status, bool& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectPresetSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitPresetList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitPresetList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPresetSlot_Impl(int32_t SortType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPresetSlot_Impl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_IMG-Preset_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Preset_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsCorrectPerk(enum class EPerkSlotFlag Type, struct TArray<struct FName>& Index, enum class EDevelopmentStatus status, bool& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectPerk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPerkSlot_Impl(int32_t SortType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPerkSlot_Impl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitPerkList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitPerkList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_IMG-Perk_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Perk_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_IMG-Gear_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Gear_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetGearSlot_Impl(int32_t SortType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetGearSlot_Impl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsCorrectGear(enum class EWearableItemType Type, enum class EDevelopmentStatus status, bool& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectGear // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitGearList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitGearList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsCorrectVehicleSlot(enum class EDevelopmentStatus status, bool& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectVehicleSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_IMG-Vehicle_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Vehicle_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitVehicleList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitVehicleList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCustomizeSlot_Impl(int32_t SortType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetCustomizeSlot_Impl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitCustomizeData(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitCustomizeData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetConsumableSlot_Impl(int32_t SortType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetConsumableSlot_Impl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitConsumableList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitConsumableList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsCorrectConsumableSlot(enum class EItemType Type, enum class EDevelopmentStatus status, bool& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectConsumableSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWearableSlot_Impl(int32_t SortType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWearableSlot_Impl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitWearableList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitWearableList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitAttachmentList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitAttachmentList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetAttachmentSlot_Impl(int32_t SortType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAttachmentSlot_Impl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsCorrectAmmo(enum class EBlackmarketTabType TabType, enum class EDevelopmentStatus status, bool& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectAmmo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetAmmoSlot_Impl(int32_t SortType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAmmoSlot_Impl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitAmmoList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitAmmoList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponSlot_Impl(int32_t SortType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWeaponSlot_Impl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitWeaponList(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitWeaponList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsCorrectCustomize(enum class EWearableItemType Type, enum class EDevelopmentStatus status, bool& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectCustomize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_IMG-Custom_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Custom_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsCorrectWearable(enum class EWearableItemType Type, enum class EDevelopmentStatus status, bool& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectWearable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsCorrectAttachment(enum class EWeaponAttachmentType Type, enum class EDevelopmentStatus status, bool& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectAttachment // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetVehicleSlot_Impl(int32_t SortType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetVehicleSlot_Impl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCustomizeSlot2(struct FName ItemRowName, struct FInventoryItemDetailInfo InventoryItemDetailInfo); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetCustomizeSlot2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void IsCorrectWeapon(enum class EWeaponType WeaponType, enum class EDevelopmentStatus status, bool& bResult); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.IsCorrectWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_IMG-Medical_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Medical_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_IMG-Wearable_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Wearable_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_IMG-Attachment_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Attachment_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_IMG-Ammo_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Ammo_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	struct FEventReply On_IMG-Weapon_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.On_IMG-Weapon_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetTab(enum class EBlackmarketTabType TabType); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetData(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitData(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.InitData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SaveGameData(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SaveGameData // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__Button_1003_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BndEvt__Button_1003_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void SetText_culture(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetText_culture // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__AllItem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BndEvt__AllItem_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BlackMarketItemExecute(struct FBravoHotelBlackMarketDataType ItemData); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BlackMarketItemExecute // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BlackMarketCustomItemExecute(struct FBravoHotelBlackMarketDataType ItemData); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.BlackMarketCustomItemExecute // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetAmmoSlot(int32_t SlotType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAmmoSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetConsumableSlot(int32_t SlotType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetConsumableSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetAttachmentSlot(int32_t SlotType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetAttachmentSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetCustomizeSlot(int32_t SlotType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetCustomizeSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetGearSlot(int32_t SlotType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetGearSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPerkSlot(int32_t SlotType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPerkSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetPresetSlot(int32_t SlotType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetPresetSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetVehicleSlot(int32_t SlotType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetVehicleSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWeaponSlot(int32_t SlotType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWeaponSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetWearableSlot(int32_t SlotType, bool bHideOption); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.SetWearableSlot // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-BlackMarket_Main(int32_t EntryPoint); // Function UW-BlackMarket_Main.UW-BlackMarket_Main_C.ExecuteUbergraph_UW-BlackMarket_Main // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

