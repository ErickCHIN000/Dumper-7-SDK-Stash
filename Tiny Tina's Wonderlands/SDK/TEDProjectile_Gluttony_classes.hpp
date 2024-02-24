#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xC18 - 0xC00)
// BlueprintGeneratedClass TEDProjectile_Gluttony.TEDProjectile_Gluttony_C
class ATEDProjectile_Gluttony_C : public ATEDProjectile_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC00(0x8)(Transient, DuplicateTransient)
	bool                                         NoAttach;                                          // 0xC08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AOakCharacter*                         OakCharacterOwner;                                 // 0xC10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATEDProjectile_Gluttony_C* GetDefaultObj();

	void UserConstructionScript();
	void GbxAsyncRequest_Spawned_716E430B44F27D168947B0BBD172BBC3(class AActor* Actor, int32 InstanceIndex);
	void OnBeginExplode();
	void OnExplode();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void SetupBehaviors();
	void OnBeginWeaponTransform();
	void ExecuteUbergraph_TEDProjectile_Gluttony(int32 EntryPoint, class AIO_TEDProjectile_Gluttony_C* Temp_object_Variable, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, class AIO_TEDProjectile_Gluttony_C* K2Node_DynamicCast_AsIO_TEDProjectile_Gluttony, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentHealthPercent_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class AActor* CallFunc_GetOwner_ReturnValue1, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetCurrentHealthPercent_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1);
};

}


