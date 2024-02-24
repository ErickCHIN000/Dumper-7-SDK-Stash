#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x278 - 0x220)
// BlueprintGeneratedClass ba_BoardMarker.ba_BoardMarker_C
class Aba_BoardMarker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Timeline_0_zBlend_B9F7648E4BBF4D0D277E22A9591EEFA9; // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_B9F7648E4BBF4D0D277E22A9591EEFA9; // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_213D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       HighPoint;                                         // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       LowPoint;                                          // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_InvestigationBoard_Parent_C*       SpawnedBoard;                                      // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SpawnedBoardClass;                                 // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            EndMovement;                                       // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class Aba_BoardMarker_C* GetDefaultObj();

	void SpawnBoard(class UClass* SpawnedBoardClass, class UClass** Class, bool* IsCompleted, bool CallFunc_EqualEqual_ClassClass_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Aba_InvestigationBoard_Parent_C* CallFunc_FinishSpawningActor_ReturnValue, class UChildActorComponent* CallFunc_AddComponent_ReturnValue);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__Hide__EventFunc();
	void Move(enum class ETimelineDirection Selection);
	void InstantMove(enum class ETimelineDirection Selection);
	void ShowHIde(enum class ETimelineDirection A);
	void ExecuteUbergraph_ba_BoardMarker(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, enum class ETimelineDirection K2Node_CustomEvent_Selection_1, float CallFunc_Lerp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, enum class ETimelineDirection K2Node_CustomEvent_Selection, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X_4, float CallFunc_BreakVector_Y_4, float CallFunc_BreakVector_Z_4, float CallFunc_BreakVector_X_5, float CallFunc_BreakVector_Y_5, float CallFunc_BreakVector_Z_5, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, enum class ETimelineDirection K2Node_CustomEvent_A, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1);
	void EndMovement__DelegateSignature();
};

}


