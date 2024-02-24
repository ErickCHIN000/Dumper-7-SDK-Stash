#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x520 - 0x488)
// BlueprintGeneratedClass ba_aa_pda_00.ba_aa_pda_00_C
class Aba_aa_pda_00_C : public Aba_aa_Intermediary_ActiveItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x488(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPointLightComponent*                  PointLight;                                        // 0x490(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Screen;                                            // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ConnectingTimeline_ConnectingText_53D95CD24F0666512758A7974B3783FC; // 0x4B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        ConnectingTimeline_Linear_53D95CD24F0666512758A7974B3783FC; // 0x4B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        ConnectingTimeline_NoiseUpdate_53D95CD24F0666512758A7974B3783FC; // 0x4B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                ConnectingTimeline__Direction_53D95CD24F0666512758A7974B3783FC; // 0x4BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_16D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ConnectingTimeline;                                // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        ClassesOfActorsDetectedByRadar;                    // 0x4C8(0x10)(Edit, BlueprintVisible, SaveGame)
	FMulticastInlineDelegateProperty_            ScanWasFired;                                      // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Menu_sound_post_delay;                             // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Scan_sound_delay;                                  // 0x4E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16F2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultAlternativeActivateCooldown;                // 0x4EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        HighlightedActors;                                 // 0x4F0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              WidgetMDI;                                         // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     PDAScreenInstance;                                 // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_sw_Geiger_C*                      CachedWidget;                                      // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         Hero;                                              // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_aa_pda_00_C* GetDefaultObj();

	void AllowPass(bool* Result, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetIsPDAToggleActivated_ReturnValue);
	void ApplyCooldownReductionPerk(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_CheckPerk_ValueA, float CallFunc_CheckPerk_ValueB, bool CallFunc_CheckPerk_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void GetWidget(class UWid_Pda_C** Wid_Pda, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_Pda_C* K2Node_DynamicCast_AsWid_Pda, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
	void ConnectingTimeline__FinishedFunc();
	void ConnectingTimeline__UpdateFunc();
	void ConnectingTimeline__PopProgressBar__EventFunc();
	void ConnectingTimeline__PopProgressBarBG__EventFunc();
	void ConnectingTimeline__PopPercentage__EventFunc();
	void ConnectingTimeline__PopText__EventFunc();
	void ConnectingTimeline__PopLoading__EventFunc();
	void ReceiveTick(float DeltaSeconds);
	void AlternativeActivateItem();
	void ActivateItem();
	void OnHideShowAdditional(enum class EState OutTargetState);
	void AdditionalUsability();
	void AdditionalUsabilityDos();
	void FailedAlternativeActivateItem();
	void Event_StartConnecting();
	void ReceiveBeginPlay();
	void BeforeRadarSphereDestroyed(class ARadarSphere* Target);
	void OnRadarImageCreated(class ARadarSphere* Target, class ARadarAfterImage* RadarImage);
	void OnCustomRadarImageCreated(class ARadarAfterImage* RadarImage);
	void AddRadarImageToArray(class AActor*& NewRadarImage);
	void InitHero();
	void CheatActivatePDA();
	void ExecuteUbergraph_ba_aa_pda_00(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_2, FDelegateProperty_ Temp_delegate_Variable_2, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_3, FDelegateProperty_ Temp_delegate_Variable_3, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_4, FDelegateProperty_ Temp_delegate_Variable_4, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_5, FDelegateProperty_ Temp_delegate_Variable_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_Event_DeltaSeconds, enum class EState K2Node_Event_OutTargetState, class ARadarSphere* CallFunc_SpawnRadarWave_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1, int32 CallFunc_PostEvent_ReturnValue_2, int32 CallFunc_PostEvent_ReturnValue_3, int32 CallFunc_PostEvent_ReturnValue_4, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_5, class UWid_Pda_C* K2Node_DynamicCast_AsWid_Pda, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UWid_Pda_C* K2Node_DynamicCast_AsWid_Pda_1, bool K2Node_DynamicCast_bSuccess_1, class ARadarSphere* K2Node_CustomEvent_Target_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ARadarSphere* K2Node_CustomEvent_Target, class ARadarAfterImage* K2Node_CustomEvent_RadarImage_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, class UWid_Pda_C* K2Node_DynamicCast_AsWid_Pda_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Update_Resources_FoundItemOfClass, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ARadarAfterImage* K2Node_CustomEvent_RadarImage, class AActor* K2Node_CustomEvent_NewRadarImage, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue, class UWid_Pda_C* K2Node_DynamicCast_AsWid_Pda_3, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Update_Resources_FoundItemOfClass_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, bool CallFunc_AllowPass_Result, bool CallFunc_AllowPass_Result_1, bool CallFunc_AllowPass_Result_2, bool CallFunc_AllowPass_Result_3, class UWid_Pda_C* CallFunc_GetWidget_Wid_Pda, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, bool CallFunc_IsValid_ReturnValue);
	void ScanWasFired__DelegateSignature();
};

}


