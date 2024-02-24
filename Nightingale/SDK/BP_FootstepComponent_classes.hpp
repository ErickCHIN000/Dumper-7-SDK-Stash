#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x430 - 0x430)
// BlueprintGeneratedClass BP_FootstepComponent.BP_FootstepComponent_C
class UBP_FootstepComponent_C : public UFootstepComponent
{
public:

	static class UClass* StaticClass();
	static class UBP_FootstepComponent_C* GetDefaultObj();

	bool TryQueryFootstepAffinityTable(struct FGameplayTag& InLocomotionTag, struct FGameplayTag& InFootstepTypeTag, struct FFootstepAudioData* OutFootstepAudioData, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, const struct FS_FootstepAudioEventData& CallFunc_GetTableCellData_OutData, const struct FFootstepAudioData& K2Node_MakeStruct_FootstepAudioData);
	void FootstepSpawnVFXDisplay(class AActor* SteppingActor, class USkeletalMeshComponent* MeshComp, class FName& FootstepSocket, struct FGameplayTag& FootstepStypeTag, float WaterDepth, struct FVector& WaterHitNormal, struct FVector& WaterHitLocation, struct FGameplayTag& LocomotionTag, double CallFunc_SpawnVFXDisplay_WaterDepth_ImplicitCast);
	void SetSurfaceWetnessRTPC(class UAkComponent* AkComponent, class UPhysicalMaterial* PhysMat, class UAkSwitchValue* SurfaceSwitch, double CallFunc_Set_Wetness_RTPC_for_Surface_Surface_Wetness);
	class UComponentAudioBucket* GetAudioBucketForFoot(uint8 FootType, enum class EFootType Temp_byte_Variable, uint8 CallFunc_GetValidValue_ReturnValue, class UComponentAudioBucket* Temp_object_Variable, class UComponentAudioBucket* Temp_object_Variable_1, class UComponentAudioBucket* Temp_object_Variable_2, class UComponentAudioBucket* Temp_object_Variable_3, class UComponentAudioBucket* Temp_object_Variable_4, class UComponentAudioBucket* Temp_object_Variable_5, class UComponentAudioBucket* Temp_object_Variable_6, class UComponentAudioBucket* Temp_object_Variable_7, class UComponentAudioBucket* Temp_object_Variable_8, class UComponentAudioBucket* Temp_object_Variable_9, class UComponentAudioBucket* K2Node_Select_Default);
};

}


