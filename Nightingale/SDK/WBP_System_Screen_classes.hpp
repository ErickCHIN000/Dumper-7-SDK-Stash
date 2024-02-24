#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x4F0 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_System_Screen.WBP_System_Screen_C
class UWBP_System_Screen_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             CBU_PrivacyPolicy;                                 // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Quit;                                          // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_ReportABug;                                    // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Rewards;                                       // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Stuck;                                         // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Buttons;                                        // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_System_Screen_C* GetDefaultObj();

	void OnActivatedInternal(enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsInAnyDeathState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, double K2Node_Select_Default_1, const struct FRealmSettings& CallFunc_GetCurrentRealmSettings_OutRealmSettings, bool CallFunc_GetCurrentRealmSettings_ReturnValue, bool CallFunc_HasOnboardingRealmsTags_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	class UWidget* BP_GetDesiredFocusTarget(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsRendered_ReturnValue);
	void BndEvt__WBP_System_Screen_WBP_Common_Button_Base_182_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_System_Screen_CBU_Stuck_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_System_Screen_CBU_PrivacyPolicy_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_System_Screen_CBU_ReportABug_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_System_Screen_CBU_Quit_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnActivated();
	void ExecuteUbergraph_WBP_System_Screen(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UWBP_Redemption_Screen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, class UWBP_PrivacyAgreement_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, const class FString& CallFunc_MakeLiteralString_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue_1, class UWBP_Popup_QuitGame_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2);
};

}


