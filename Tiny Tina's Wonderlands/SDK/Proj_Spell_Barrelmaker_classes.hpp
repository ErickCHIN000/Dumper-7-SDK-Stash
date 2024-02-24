#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x7F8 - 0x748)
// BlueprintGeneratedClass Proj_Spell_Barrelmaker.Proj_Spell_Barrelmaker_C
class AProj_Spell_Barrelmaker_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x748(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x750(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            SpellHitInfo;                                      // 0x758(0x90)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         bIgnoreForcedCleanup;                              // 0x7E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class Enum_SpellDeliveryMethod          SpellDelivery;                                     // 0x7E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTryToSpawnSplatAgain;                             // 0x7EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46D7[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LaunchedActor;                                     // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AProj_Spell_Barrelmaker_C* GetDefaultObj();

	void ConfigureDelivery(int32 Temp_int_Variable, enum class Enum_SpellDeliveryMethod Temp_byte_Variable, enum class Enum_SpellDeliveryMethod Temp_byte_Variable1, enum class Enum_SpellDeliveryMethod Temp_byte_Variable2, enum class Enum_SpellDeliveryMethod Temp_byte_Variable3, enum class Enum_SpellDeliveryMethod Temp_byte_Variable4, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, enum class Enum_SpellDeliveryMethod K2Node_Select_Default);
	void UserConstructionScript();
	void GbxAsyncRequest_Spawned_37D1E4F545042658EB03368A7F76022D(class AActor* Actor, int32 InstanceIndex);
	void ReceiveBeginPlay();
	void SpawnBarrel();
	void ExecuteUbergraph_Proj_Spell_Barrelmaker(int32 EntryPoint, enum class EOakElementalType Temp_byte_Variable, class ABP_ExplodingObject_C* K2Node_DynamicCast_AsBP_Exploding_Object, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ABP_ExplodingObject_Barrel_C* K2Node_DynamicCast_AsBP_Exploding_Object_Barrel, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IBPI_IO_Combat_Barrel_C> CallFunc_BPI_StartFuse_self_CastInput, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C* K2Node_DynamicCast_AsBP_Exploding_Object_Daffodil_Barrel_Barrelmaker, bool K2Node_DynamicCast_bSuccess2, class ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C* Temp_object_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, const struct FRotator& CallFunc_RandomRotator_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, int32 K2Node_Select_Default);
};

}


