// WidgetBlueprintGeneratedClass UW-Lobby_Craft_List.UW-Lobby_Craft_List_C
// Size: 0x2cff6a74 (Inherited: 0x2cff6a88)
struct UUW-Lobby_Craft_List_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UComboBoxString* ComboBoxString_Sort; // 0x290(0x08)
	struct UImage* Down; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Img_Bg; // 0x2a8(0x08)
	struct UOverlay* Overlay; // 0x2b0(0x08)
	struct UTextBlock* SortText; // 0x2b8(0x08)
	struct UImage* Up; // 0x2c0(0x08)
	struct UUW-Lobby_Craft_List_Category_C* UW-Lobby_RecipeList_Category; // 0x2c8(0x08)
	struct UUW-Lobby_Craft_List_Category_C* UW-Lobby_RecipeList_Category; // 0x2d0(0x08)
	struct UUW-Lobby_Craft_List_Category_C* UW-Lobby_RecipeList_Category; // 0x2d8(0x08)
	struct UVerticalBox* VerticalBox_Category; // 0x2e0(0x08)
	struct TMap<struct FString, struct UUW-Lobby_Craft_List_Category_C*> CategoryList; // 0x2e8(0x50)
	struct TArray<struct FString> SortTypeList; // 0x338(0x10)
	struct UUW-Lobby_Craft_List_Category_C* LastOpenedCategory; // 0x348(0x08)
	bool IsOwn; // 0x350(0x01)
	bool IsOwnAny; // 0x351(0x01)
	int32_t CraftingID; // 0x354(0x04)
	struct FText TextAll; // 0x358(0x18)
	int32_t LanguageIndex; // 0x370(0x04)

	void CheckLanguageIndex(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.CheckLanguageIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedArmoryTab(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.OnChangedArmoryTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnSelectedCrafting(int32_t CraftingID); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.OnSelectedCrafting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SetOwn(bool NewOwn, bool NewOwnAny); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.SetOwn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void DefaultSelectButton(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.DefaultSelectButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void SelectCraftingInfo(int32_t CraftingID); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.SelectCraftingInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckLastCategory(struct UUW-Lobby_Craft_List_Category_C* NewOpendWidget); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.CheckLastCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ResetLastCategory(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.ResetLastCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void CheckOwn(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.CheckOwn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void OnChangedWeaponType(struct FString WeaponType); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.OnChangedWeaponType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void ClearCategory(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.ClearCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void InitCraftingCategory(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.InitCraftingCategory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.BndEvt__ComboBoxString_Sort_1_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature // (BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void Construct(); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-Lobby_Craft_List(int32_t EntryPoint); // Function UW-Lobby_Craft_List.UW-Lobby_Craft_List_C.ExecuteUbergraph_UW-Lobby_Craft_List // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
};

