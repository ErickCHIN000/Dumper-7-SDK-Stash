#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x1175 - 0x112C)
// BlueprintGeneratedClass Churaka_Character.Churaka_Character_C
class AChuraka_Character_C : public ABasePeacefulAICharacter_C
{
public:
	uint8                                        Pad_194B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Mod;                                               // 0x1138(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ChurakaScream;                                     // 0x1140(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x1148(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChuraka_SyncService_C*                LocalSyncService;                                  // 0x1150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EChuraka_PatrolPoiType            PatrolPoiType;                                     // 0x1158(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1955[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          AlertTimerHandle;                                  // 0x1160(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        AlertTimerUpdate;                                  // 0x1168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScreamRadius;                                      // 0x116C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScreamVolume;                                      // 0x1170(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EChuraka_PatrolTypes              PatrolType;                                        // 0x1174(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AChuraka_Character_C* GetDefaultObj();

	void SetPatrolType(enum class EChuraka_PatrolTypes NewType, bool CallFunc_IsValid_ReturnValue);
	void PlayAiNoise(bool CallFunc_IsServer_ReturnValue);
	bool OnAlertStateStop(bool CallFunc_OnAlertStateStop_ReturnValue);
	bool OnAlertState(bool CallFunc_OnAlertState_ReturnValue);
	void UpdateAlertTimer();
	void StopAlertTimer();
	void StartAlertTimer(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void CalculatePatrolPoi(bool* Result, bool CallFunc_ShouldHappen_ReturnValue);
	void ResetPatrolPOI(bool* Result);
	void SetPatrolPoi(enum class EChuraka_PatrolPoiType Type);
	void SetSyncService(class UBTS_BaseSyncService_C* Service, bool* Result, class UChuraka_SyncService_C* K2Node_DynamicCast_AsChuraka_Sync_Service, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetSyncService_Result);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void AlertTimerStartEvent();
	void AlertTimerStopEvent();
	void BB_SyncPatrolPoi();
	void CustomEvent(float DeltaSeconds);
	void ExecuteUbergraph_Churaka_Character(int32 EntryPoint, float K2Node_Event_DeltaSeconds_1, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FRotator& CallFunc_GetHeadRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_GetPeripheralVisionAngle_ReturnValue);
};

}


