#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StoneStomp_SpecialEffect_Knotted.BP_StoneStomp_SpecialEffect_Knotted_C
// (Actor)

class UClass* ABP_StoneStomp_SpecialEffect_Knotted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StoneStomp_SpecialEffect_Knotted_C");

	return Clss;
}


// BP_StoneStomp_SpecialEffect_Knotted_C BP_StoneStomp_SpecialEffect_Knotted.Default__BP_StoneStomp_SpecialEffect_Knotted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StoneStomp_SpecialEffect_Knotted_C* ABP_StoneStomp_SpecialEffect_Knotted_C::GetDefaultObj()
{
	static class ABP_StoneStomp_SpecialEffect_Knotted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StoneStomp_SpecialEffect_Knotted_C*>(ABP_StoneStomp_SpecialEffect_Knotted_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StoneStomp_SpecialEffect_Knotted.BP_StoneStomp_SpecialEffect_Knotted_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StoneStomp_SpecialEffect_Knotted_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneStomp_SpecialEffect_Knotted_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StoneStomp_SpecialEffect_Knotted.BP_StoneStomp_SpecialEffect_Knotted_C.OnEnemyHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StoneStomp_SpecialEffect_Knotted_C::OnEnemyHit(class AEnemyCharacter_C* Enemy, const struct FVector& ImpactNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneStomp_SpecialEffect_Knotted_C", "OnEnemyHit");

	Params::ABP_StoneStomp_SpecialEffect_Knotted_C_OnEnemyHit_Params Parms{};

	Parms.Enemy = Enemy;
	Parms.ImpactNormal = ImpactNormal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StoneStomp_SpecialEffect_Knotted.BP_StoneStomp_SpecialEffect_Knotted_C.ExecuteUbergraph_BP_StoneStomp_SpecialEffect_Knotted
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_Event_Enemy                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ImpactNormal                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABossBaseCharacter_C*        K2Node_DynamicCast_AsBoss_Base_Character                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StoneStomp_SpecialEffect_Knotted_C::ExecuteUbergraph_BP_StoneStomp_SpecialEffect_Knotted(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AEnemyCharacter_C* K2Node_Event_Enemy, const struct FVector& K2Node_Event_ImpactNormal, class ABossBaseCharacter_C* K2Node_DynamicCast_AsBoss_Base_Character, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StoneStomp_SpecialEffect_Knotted_C", "ExecuteUbergraph_BP_StoneStomp_SpecialEffect_Knotted");

	Params::ABP_StoneStomp_SpecialEffect_Knotted_C_ExecuteUbergraph_BP_StoneStomp_SpecialEffect_Knotted_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Event_Enemy = K2Node_Event_Enemy;
	Parms.K2Node_Event_ImpactNormal = K2Node_Event_ImpactNormal;
	Parms.K2Node_DynamicCast_AsBoss_Base_Character = K2Node_DynamicCast_AsBoss_Base_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


