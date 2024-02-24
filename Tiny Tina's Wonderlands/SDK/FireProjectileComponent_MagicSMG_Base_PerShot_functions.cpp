#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireProjectileComponent_MagicSMG_Base_PerShot.FireProjectileComponent_MagicSMG_Base_PerShot_C
// (None)

class UClass* UFireProjectileComponent_MagicSMG_Base_PerShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireProjectileComponent_MagicSMG_Base_PerShot_C");

	return Clss;
}


// FireProjectileComponent_MagicSMG_Base_PerShot_C FireProjectileComponent_MagicSMG_Base_PerShot.Default__FireProjectileComponent_MagicSMG_Base_PerShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireProjectileComponent_MagicSMG_Base_PerShot_C* UFireProjectileComponent_MagicSMG_Base_PerShot_C::GetDefaultObj()
{
	static class UFireProjectileComponent_MagicSMG_Base_PerShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireProjectileComponent_MagicSMG_Base_PerShot_C*>(UFireProjectileComponent_MagicSMG_Base_PerShot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FireProjectileComponent_MagicSMG_Base_PerShot.FireProjectileComponent_MagicSMG_Base_PerShot_C.ResetShotCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireProjectileComponent_MagicSMG_Base_PerShot_C::ResetShotCounter(int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Base_PerShot_C", "ResetShotCounter");

	Params::UFireProjectileComponent_MagicSMG_Base_PerShot_C_ResetShotCounter_Params Parms{};

	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireProjectileComponent_MagicSMG_Base_PerShot.FireProjectileComponent_MagicSMG_Base_PerShot_C.GetShotLightProjectileData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class ULightProjectileData>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TSubclassOf<class ULightProjectileData> UFireProjectileComponent_MagicSMG_Base_PerShot_C::GetShotLightProjectileData(bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Base_PerShot_C", "GetShotLightProjectileData");

	Params::UFireProjectileComponent_MagicSMG_Base_PerShot_C_GetShotLightProjectileData_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FireProjectileComponent_MagicSMG_Base_PerShot.FireProjectileComponent_MagicSMG_Base_PerShot_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UFireProjectileComponent_MagicSMG_Base_PerShot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Base_PerShot_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireProjectileComponent_MagicSMG_Base_PerShot.FireProjectileComponent_MagicSMG_Base_PerShot_C.OnUsed_MagicSMG
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFireProjectileComponent_MagicSMG_Base_PerShot_C::OnUsed_MagicSMG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Base_PerShot_C", "OnUsed_MagicSMG");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireProjectileComponent_MagicSMG_Base_PerShot.FireProjectileComponent_MagicSMG_Base_PerShot_C.DoSpecialBarrelBehavior
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFireProjectileComponent_MagicSMG_Base_PerShot_C::DoSpecialBarrelBehavior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Base_PerShot_C", "DoSpecialBarrelBehavior");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireProjectileComponent_MagicSMG_Base_PerShot.FireProjectileComponent_MagicSMG_Base_PerShot_C.ExecuteUbergraph_FireProjectileComponent_MagicSMG_Base_PerShot
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireProjectileComponent_MagicSMG_Base_PerShot_C::ExecuteUbergraph_FireProjectileComponent_MagicSMG_Base_PerShot(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireProjectileComponent_MagicSMG_Base_PerShot_C", "ExecuteUbergraph_FireProjectileComponent_MagicSMG_Base_PerShot");

	Params::UFireProjectileComponent_MagicSMG_Base_PerShot_C_ExecuteUbergraph_FireProjectileComponent_MagicSMG_Base_PerShot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


