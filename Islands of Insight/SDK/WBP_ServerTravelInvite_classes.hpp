#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x340 - 0x318)
// WidgetBlueprintGeneratedClass WBP_ServerTravelInvite.WBP_ServerTravelInvite_C
class UWBP_ServerTravelInvite_C : public UInputWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_NotificationHeader_C*             WBP_NotificationHeader;                            // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_YesNoButton_C*                    WBP_YesNoButton;                                   // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                IP;                                                // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ServerTravelInvite_C* GetDefaultObj();

	void BndEvt__WBP_ServerTravelInvite_WBP_YesNoButton_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(bool Response);
	void ExecuteUbergraph_WBP_ServerTravelInvite(int32 EntryPoint, bool K2Node_ComponentBoundEvent_Response, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_SophiaPlayerState_C* K2Node_DynamicCast_AsBP_Sophia_Player_State, bool K2Node_DynamicCast_bSuccess);
};

}


