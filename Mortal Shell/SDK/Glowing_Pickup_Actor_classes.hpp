#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x4E0 - 0x4B0)
// BlueprintGeneratedClass Glowing_Pickup_Actor.Glowing_Pickup_Actor_C
class AGlowing_Pickup_Actor_C : public AWorld_Actor_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x4B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              GlowingItem;                                       // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ConsoleParticle;                                   // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ActiveParticle;                                    // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CooldownParticle;                                  // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGlowing_Pickup_Actor_C* GetDefaultObj();

	void UserConstructionScript(enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void ReceiveBeginPlay();
	void OnTimerStart();
	void OnTimerEnd();
	void ExecuteUbergraph_Glowing_Pickup_Actor(int32 EntryPoint, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UParticleSystem* K2Node_Select_Default, class UParticleSystem* Temp_object_Variable_2, class UParticleSystem* Temp_object_Variable_3, class UParticleSystem* K2Node_Select_Default_1);
};

}


