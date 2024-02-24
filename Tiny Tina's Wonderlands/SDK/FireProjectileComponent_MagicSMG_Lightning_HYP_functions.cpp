#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireProjectileComponent_MagicSMG_Lightning_HYP.FireProjectileComponent_MagicSMG_Lightning_HYP_C
// (None)

class UClass* UFireProjectileComponent_MagicSMG_Lightning_HYP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireProjectileComponent_MagicSMG_Lightning_HYP_C");

	return Clss;
}


// FireProjectileComponent_MagicSMG_Lightning_HYP_C FireProjectileComponent_MagicSMG_Lightning_HYP.Default__FireProjectileComponent_MagicSMG_Lightning_HYP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireProjectileComponent_MagicSMG_Lightning_HYP_C* UFireProjectileComponent_MagicSMG_Lightning_HYP_C::GetDefaultObj()
{
	static class UFireProjectileComponent_MagicSMG_Lightning_HYP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireProjectileComponent_MagicSMG_Lightning_HYP_C*>(UFireProjectileComponent_MagicSMG_Lightning_HYP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FireProjectileComponent_MagicSMG_Lightning_HYP.FireProjectileComponent_MagicSMG_Lightning_HYP_C.ResetShotCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFireProjectileComponent_MagicSMG_Lightning_HYP_C::ResetShotCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Lightning_HYP_C", "ResetShotCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireProjectileComponent_MagicSMG_Lightning_HYP.FireProjectileComponent_MagicSMG_Lightning_HYP_C.ExecuteUbergraph_FireProjectileComponent_MagicSMG_Lightning_HYP
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFireProjectileComponent_MagicSMG_Lightning_HYP_C::ExecuteUbergraph_FireProjectileComponent_MagicSMG_Lightning_HYP(int32 EntryPoint, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Lightning_HYP_C", "ExecuteUbergraph_FireProjectileComponent_MagicSMG_Lightning_HYP");

	Params::UFireProjectileComponent_MagicSMG_Lightning_HYP_C_ExecuteUbergraph_FireProjectileComponent_MagicSMG_Lightning_HYP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


