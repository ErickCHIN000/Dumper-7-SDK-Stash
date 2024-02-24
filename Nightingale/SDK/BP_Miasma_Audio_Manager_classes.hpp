#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xC0 - 0xA0)
// BlueprintGeneratedClass BP_Miasma_Audio_Manager.BP_Miasma_Audio_Manager_C
class UBP_Miasma_Audio_Manager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FVector>                       MiasmaLocationArray;                               // 0xA8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       CooldownRadius;                                    // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Miasma_Audio_Manager_C* GetDefaultObj();

	void CheckNightmareRealm(class UScopedAkComponent* ScopedAkComponent, const struct FRealmPlacementRequirement& NightmareRealm, class UObject* Temp_object_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_IsClosed_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_DoesRealmMeetRequirement_RequirementMet);
	void CheckForCooldown(const struct FVector& AverageLocation, class UScopedAkComponent* ScopedAkComponent, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void MiasmaEventEnded(enum class EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo, class UAkEventCallbackInfo* K2Node_DynamicCast_AsAk_Event_Callback_Info, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void SetMultipositionAudio(bool IsMultiEmitter, TArray<struct FVector>& MiasmaLocations, class UScopedAkComponent* ScopedAkComponent, bool CallFunc_IsValid_ReturnValue, TArray<struct FTransform>& CallFunc_LocationsToTransforms_Transforms);
	void GetEventFromGroupSize(double BoundAverageCount, class UAkAudioEvent** AkEvent, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void MiasmaAudioEvent(TArray<struct FVector>& Locations, double BoundAverageCount, bool IsMultiEmitter, class UAkAudioEvent* AkEvent, class UScopedAkComponent* ScopedAkComponent, const struct FVector& AverageLocation, const TArray<struct FVector>& MiasmaLocations, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_PostAkEvent_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, class UAkAudioEvent* CallFunc_GetEventFromGroupSize_AkEvent, const struct FVector& CallFunc_GetVectorArrayAverage_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Miasma_Audio_Manager(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


