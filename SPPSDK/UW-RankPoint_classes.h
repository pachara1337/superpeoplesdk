// WidgetBlueprintGeneratedClass UW-RankPoint.UW-RankPoint_C
// Size: 0x2cff6b00 (Inherited: 0x2cff6a88)
struct UUW-RankPoint_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UHorizontalBox* HorizontalBox_Next; // 0x290(0x08)
	struct UProgressBar* ProgressBar_Current; // 0x298(0x08)
	struct UProgressBar* ProgressBar_Down; // 0x2a0(0x08)
	struct UProgressBar* ProgressBar_Up; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_Current; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_Max; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_Next; // 0x2c0(0x08)
	bool EnableUpdate; // 0x2c8(0x01)
	float CurTime; // 0x2cc(0x04)
	float ShowTime; // 0x2d0(0x04)
	float EndPoint; // 0x2d4(0x04)
	float ChangeValue; // 0x2d8(0x04)
	float StartPoint; // 0x2dc(0x04)
	float Min; // 0x2e0(0x04)
	float MAX; // 0x2e4(0x04)
	bool IsUPState; // 0x2e8(0x01)
	struct FMulticastInlineDelegate Dispatcher_ProgressBarDone; // 0x2f0(0x10)
	char pad_2CFF6AF6[0xa]; // 0x2cff6af6(0x0a)

	void SetData(float StartPoint, float EndPoint, float Min, float MAX, float ShowTime, bool Play); // Function UW-RankPoint.UW-RankPoint_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UW-RankPoint.UW-RankPoint_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x2bad3b0
	void ExecuteUbergraph_UW-RankPoint(int32_t EntryPoint); // Function UW-RankPoint.UW-RankPoint_C.ExecuteUbergraph_UW-RankPoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x2bad3b0
	void Dispatcher_ProgressBarDone__DelegateSignature(); // Function UW-RankPoint.UW-RankPoint_C.Dispatcher_ProgressBarDone__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x2bad3b0
};

