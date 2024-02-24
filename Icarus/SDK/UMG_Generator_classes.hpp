#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7A (0x2FA - 0x280)
// WidgetBlueprintGeneratedClass UMG_Generator.UMG_Generator_C
class UUMG_Generator_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShelterWarning;                                    // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenMenu;                                          // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      DeviceWarningPulse;                                // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               ActivateFrame;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ActivatePrompt;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  CloseButton;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  EnergyActivationButton;                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  RequiresShelterButton;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               RequiresShelterPrompt;                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DeployableModifiersList_C*        UMG_DeployableModifiersList_C_1;                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DeviceInfo_C*                     UMG_DeviceInfo;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DeviceInventory_C*                UMG_DeviceInventory;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FuelInventory_C*                  UMG_FuelInventory;                                 // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PlayerInventory_C*                UMG_PlayerInventory;                               // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         GeneratorState;                                    // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSheltered;                                       // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_Generator_C* GetDefaultObj();

	void UpdateLocalState(bool State);
	void CheckShelteredIndicator(enum class EValid CallFunc_GetTrait_Paths, class UProcessingComponent* CallFunc_GetTrait_ReturnValue, const struct FProcessingData& CallFunc_GetProcessingData_OutData, bool CallFunc_GetProcessingData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class UActorState* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsShelteredRequiredDisabled_ReturnValue, float CallFunc_GetShelter_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void ShowShelterWarningStyle(bool Sheltered, const struct FLinearColor& WarningFrameColour, const struct FLinearColor& BaseFrameColour, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FLinearColor& K2Node_Select_Default_1);
	enum class ESlateVisibility ShowShelteredIndicator(float NewLocalVar_0, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EValid CallFunc_GetTrait_Paths, class UProcessingComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FProcessingData& CallFunc_GetProcessingData_OutData, bool CallFunc_GetProcessingData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UActorState* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetShelter_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsShelteredRequiredDisabled_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CloseUI(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_UMG_Generator(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EValid CallFunc_GetTrait_Paths, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsValid_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EValid CallFunc_GetTrait_Paths_1, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_2, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FGeneratorData& CallFunc_GetGeneratorData_OutData, bool CallFunc_GetGeneratorData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, enum class ESlateVisibility K2Node_Select_Default, class AActor* K2Node_CustomEvent_Actor, enum class EEndPlayReason K2Node_CustomEvent_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


