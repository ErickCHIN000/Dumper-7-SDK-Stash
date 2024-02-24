#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x5B0 - 0x578)
// BlueprintGeneratedClass BP_SkeletalItem_Scanner.BP_SkeletalItem_Scanner_C
class ABP_SkeletalItem_Scanner_C : public ASkeletalItem
{
public:
	uint8                                        Pad_58E6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Blinker_LightIntensity_C4C74377490DA379A11DCB8BF8DFCB80; // 0x588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Blinker__Direction_C4C74377490DA379A11DCB8BF8DFCB80; // 0x58C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Blinker;                                           // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_Scanner_C*     ScannerActionable;                                 // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         EnableAudioBeep;                                   // 0x5A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                OwningPlayer;                                      // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Scanner_C* GetDefaultObj();

	bool IsScannerActive(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue);
	void PlayAudioBeep();
	class UWidgetComponent* GetScreenWidget();
	void UpdateLightMaterial(float Intensity);
	void Blinker__FinishedFunc();
	void Blinker__UpdateFunc();
	void Blinker__Audio__EventFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ViewModeChanged(bool bIsThirdPerson);
	void ExecuteUbergraph_BP_SkeletalItem_Scanner(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, TArray<class UTraitBehaviour*>& CallFunc_GetBehaviours_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UTraitBehaviour* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UBP_ActionableBehaviour_Scanner_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Scanner, bool K2Node_DynamicCast_bSuccess_1, class UWidgetComponent* CallFunc_GetScreenWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_CaveScannerScreen_C* K2Node_DynamicCast_AsW_Cave_Scanner_Screen, bool K2Node_DynamicCast_bSuccess_2, float K2Node_Event_DeltaSeconds, bool CallFunc_IsScannerActive_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_CustomEvent_bIsThirdPerson, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, class UWidgetComponent* CallFunc_GetScreenWidget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
};

}


