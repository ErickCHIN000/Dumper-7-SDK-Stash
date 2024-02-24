#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x358 - 0x318)
// WidgetBlueprintGeneratedClass WBP_PlayerReportReceived.WBP_PlayerReportReceived_C
class UWBP_PlayerReportReceived_C : public UInputWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            AboutToReportText;                                 // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   SubmitButton;                                      // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NotificationHeader_C*             WBP_NotificationHeader;                            // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                ReportedPlayerId;                                  // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                MessageToSend;                                     // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerReportReceived_C* GetDefaultObj();

	void BndEvt__WBP_PlayerReportReceived_SubmitButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature();
	void ExecuteUbergraph_WBP_PlayerReportReceived(int32 EntryPoint);
};

}


