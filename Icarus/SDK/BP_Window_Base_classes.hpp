#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x7B0 - 0x774)
// BlueprintGeneratedClass BP_Window_Base.BP_Window_Base_C
class ABP_Window_Base_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_C79[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioOcclusionComponent*              AudioOcclusion1;                                   // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_WeatherAudioComponent_WindowShutter_C* BP_WeatherAudioComponent_WindowShutter;            // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Open;                                              // 0x790(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         CanChangeState;                                    // 0x791(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C81[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OpenStateChanged;                                  // 0x798(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          DelayedDirtyTimer;                                 // 0x7A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Window_Base_C* GetDefaultObj();

	float GetOcclusionValue(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void SetOpenableStateOnFoundationActor(bool Temp_bool_Variable, enum class EBuildingOpenableState Temp_byte_Variable, enum class EBuildingOpenableState Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess, enum class EBuildingOpenableState K2Node_Select_Default);
	void OnRep_Open(bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Open_Close_Window(const struct FHitResult& Interaction, bool* Success, bool CallFunc_Not_PreBool_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void DirtyShelter();
	void ScheduleDelayedOpenableStateCheck();
	void ExecuteUbergraph_BP_Window_Base(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_IsClosed_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason);
	void OpenStateChanged__DelegateSignature(bool Open);
};

}


