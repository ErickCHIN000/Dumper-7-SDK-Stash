#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x151 (0x3B1 - 0x260)
// WidgetBlueprintGeneratedClass wid_FractalDateSplash.wid_FractalDateSplash_C
class UWid_FractalDateSplash_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Border_1;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Countdown;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CurrentText;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TimeText;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CurrentSlot;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CountdownText;                                     // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                  CurrentLocationText;                               // 0x2A0(0x18)(Edit, BlueprintVisible)
	class FString                                Daystofeednumber;                                  // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                CurrentFoodRatio;                                  // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	enum class ESlateVisibility                  ReportScreenVisibility;                            // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DEF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInnerEvent>                   EventsToBreakIntoSplashReports;                    // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CurrentlyDisplayedName;                            // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CurrrentlyDisplayedReport;                         // 0x308(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSt_ItemAndCount>              ItemsGotOnMission;                                 // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            Ended;                                             // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        CurrentStage;                                      // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSkipAhead;                                      // 0x344(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E03[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInnerEvent                           CurrentlyReportedEvent;                            // 0x348(0x48)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  CurrentTimeText;                                   // 0x390(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  LocationDateRow;                                   // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldBeHidden;                                    // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_FractalDateSplash_C* GetDefaultObj();

	class FText Get_TimeText_Text_0();
	class FText Get_Countdown_Text_0(class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText Get_Current_Text_0();
	void Construct();
	void SetCurrenttext();
	void ExecuteUbergraph_wid_FractalDateSplash(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FStr_FractalLocationsDates& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void Ended__DelegateSignature();
};

}


