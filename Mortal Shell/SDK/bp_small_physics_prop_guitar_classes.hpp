#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x2D8 - 0x264)
// BlueprintGeneratedClass bp_small_physics_prop_guitar.bp_small_physics_prop_guitar_C
class Abp_small_physics_prop_guitar_C : public Abp_imrod_helmet_C
{
public:
	uint8                                        Pad_5A2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       Scene_Indicator;                                   // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BrokenLutePart4;                                   // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BrokenLutePart3;                                   // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BrokenLutePart2;                                   // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor;                                        // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        DestructibleFade_Opacity_EB6A922C425F4C8EB42DF5BF391C974A; // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                DestructibleFade__Direction_EB6A922C425F4C8EB42DF5BF391C974A; // 0x29C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    DestructibleFade;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fade_Opacity_88A9308F4D80AD1A69E21D904CA12521;     // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Fade__Direction_88A9308F4D80AD1A69E21D904CA12521;  // 0x2AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Fade;                                              // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasSpawnedByPlayer;                                // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGuitar_usable_child_actor_C*          UsableChildActor;                                  // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasSpawnedByEnemy;                                 // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class Enum_LuteType                     ELuteType;                                         // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseSkeletalMesh;                                   // 0x2CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5B8[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                SkeletalMeshLute;                                  // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Abp_small_physics_prop_guitar_C* GetDefaultObj();

	void StopClockworkLuteAnim(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PlayClockworkLuteAnim(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SetOpacity(float Opacity, bool CallFunc_IsValid_ReturnValue);
	void SetClockworkLute(class UMaterialInterface* Temp_object_Variable, const struct FTransform& Temp_struct_Variable, bool CallFunc_TwitchDrop_ShouldUseLuteSkin_bYes, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_TwitchDrop_ShouldUseLuteSkin_bYes_1, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_SetStaticMesh_ReturnValue, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue_1);
	void SetImperviousLute(bool CallFunc_SetStaticMesh_ReturnValue);
	void UserConstructionScript(class AGuitar_usable_child_actor_C* K2Node_DynamicCast_AsGuitar_Usable_Child_Actor, bool K2Node_DynamicCast_bSuccess);
	void Fade__FinishedFunc();
	void Fade__UpdateFunc();
	void DestructibleFade__FinishedFunc();
	void DestructibleFade__UpdateFunc();
	void ReceiveBeginPlay();
	void FadeOut();
	void Destroy();
	void FadeOut_Reverse();
	void ExecuteUbergraph_bp_small_physics_prop_guitar(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsActorBeingDestroyed_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_3, const struct FVector& CallFunc_RandomUnitVector_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_RandomUnitVector_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_5, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_6, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


