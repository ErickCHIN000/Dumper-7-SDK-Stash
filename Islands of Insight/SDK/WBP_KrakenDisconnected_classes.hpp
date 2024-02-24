#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x350 - 0x318)
// WidgetBlueprintGeneratedClass WBP_KrakenDisconnected.WBP_KrakenDisconnected_C
class UWBP_KrakenDisconnected_C : public UInputWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_StyledButton_C*                   ExitBtn;                                           // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_125;                                         // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_334;                                         // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   RetryBtn;                                          // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NotificationHeader_C*             WBP_NotificationHeader;                            // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_KrakenDisconnected_C* GetDefaultObj();

	void BndEvt__WBP_KrakenDisconnected_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature();
	void BndEvt__WBP_KrakenDisconnected_ExitBtn_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature();
	void Construct();
	void OnRejoinedKraken_Event_0();
	void ExecuteUbergraph_WBP_KrakenDisconnected(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGISKraken* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_SophiaGameInstance_C* K2Node_DynamicCast_AsBP_Sophia_Game_Instance, bool K2Node_DynamicCast_bSuccess);
};

}


