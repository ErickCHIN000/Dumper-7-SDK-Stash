#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_AudioFunctionLibrary.BP_AudioFunctionLibrary_C
class UBP_AudioFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_AudioFunctionLibrary_C* GetDefaultObj();

	void ShouldHitAudioBeSuppressedByCritZone(struct FHitResult& Hit, class UObject* __WorldContext, bool* Result, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FCriticalHitAreasEnum& CallFunc_IsCriticalHit_CriticalHitType, bool CallFunc_IsCriticalHit_ReturnValue, const struct FCriticalHitAreasRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FCriticalHitArea& CallFunc_GetCriticalHitAreasStruct_CriticalHitAreas, enum class EValid CallFunc_GetCriticalHitAreasStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FCriticalHitAreaAudioData& CallFunc_GetCriticalHitAreaAudioDataStruct_CriticalHitAreaAudioData, enum class EValid CallFunc_GetCriticalHitAreaAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1);
	void GetDamageTypeFMODParam(enum class EIcarusDamageType DamageType, class UObject* __WorldContext, enum class EDamageTypeFMODParam* FMODParamValue, enum class EIcarusDamageType Temp_byte_Variable, enum class EDamageTypeFMODParam Temp_byte_Variable_1, enum class EDamageTypeFMODParam Temp_byte_Variable_2, enum class EDamageTypeFMODParam Temp_byte_Variable_3, enum class EDamageTypeFMODParam Temp_byte_Variable_4, enum class EDamageTypeFMODParam Temp_byte_Variable_5, enum class EDamageTypeFMODParam Temp_byte_Variable_6, enum class EDamageTypeFMODParam Temp_byte_Variable_7, enum class EDamageTypeFMODParam Temp_byte_Variable_8, enum class EDamageTypeFMODParam Temp_byte_Variable_9, enum class EDamageTypeFMODParam Temp_byte_Variable_10, enum class EDamageTypeFMODParam Temp_byte_Variable_11, enum class EDamageTypeFMODParam Temp_byte_Variable_12, enum class EDamageTypeFMODParam Temp_byte_Variable_13, enum class EDamageTypeFMODParam Temp_byte_Variable_14, enum class EDamageTypeFMODParam Temp_byte_Variable_15, enum class EDamageTypeFMODParam Temp_byte_Variable_16, enum class EDamageTypeFMODParam K2Node_Select_Default);
	void IsPlayerInAudioPerspective(class AIcarusPlayerCharacter* Player, enum class EAudioPlayerPerspective Perspective, class UObject* __WorldContext, bool* Result, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetFMODAudioComponentEvent(class UFMODAudioComponent* AudioComponent, class UFMODEvent* Event, bool SetPlayStatePlaying, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void GetPlayerTypeFMODParam(class AIcarusPlayerCharacter* Player, class UObject* __WorldContext, enum class EPlayerTypeFMODParam* PlayerTypeFMODParam, enum class EPlayerTypeFMODParam Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetIsThirdPerson_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, enum class EPlayerTypeFMODParam Temp_wildcard_Variable_1);
	void GetSurfaceFMODParam(enum class EPhysicalSurface Surface, class UObject* __WorldContext, enum class ESurfaceFMODParam* SurfaceFMODParam, const struct FSurfacesRowHandle& CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue, const struct FSurfacesData& CallFunc_GetSurfacesStruct_Surfaces, enum class EValid CallFunc_GetSurfacesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void SetPlayerTypeParameter(const struct FFMODEventInstance& EventInstance, class AIcarusPlayerCharacter* Player, class UObject* __WorldContext, bool CallFunc_EventInstanceIsValid_ReturnValue, enum class EPlayerTypeFMODParam CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam, bool CallFunc_IsValid_ReturnValue);
	void SetPlayerTypeParameterAttached(class UFMODAudioComponent* AudioComponent, class AIcarusPlayerCharacter* Player, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, enum class EPlayerTypeFMODParam CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam, bool CallFunc_IsValid_ReturnValue_1);
};

}


