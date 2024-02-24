#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FiringComponent_ThunderAni.FiringComponent_ThunderAni_C
// (None)

class UClass* UFiringComponent_ThunderAni_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FiringComponent_ThunderAni_C");

	return Clss;
}


// FiringComponent_ThunderAni_C FiringComponent_ThunderAni.Default__FiringComponent_ThunderAni_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFiringComponent_ThunderAni_C* UFiringComponent_ThunderAni_C::GetDefaultObj()
{
	static class UFiringComponent_ThunderAni_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFiringComponent_ThunderAni_C*>(UFiringComponent_ThunderAni_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FiringComponent_ThunderAni.FiringComponent_ThunderAni_C.GetShotLightProjectileData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class ULightProjectileData>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TSubclassOf<class ULightProjectileData> UFiringComponent_ThunderAni_C::GetShotLightProjectileData(int32 Temp_int_Variable, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, class UClass* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FiringComponent_ThunderAni_C", "GetShotLightProjectileData");

	Params::UFiringComponent_ThunderAni_C_GetShotLightProjectileData_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FiringComponent_ThunderAni.FiringComponent_ThunderAni_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UFiringComponent_ThunderAni_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FiringComponent_ThunderAni_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FiringComponent_ThunderAni.FiringComponent_ThunderAni_C.ExecuteUbergraph_FiringComponent_ThunderAni
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFiringComponent_ThunderAni_C::ExecuteUbergraph_FiringComponent_ThunderAni(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FiringComponent_ThunderAni_C", "ExecuteUbergraph_FiringComponent_ThunderAni");

	Params::UFiringComponent_ThunderAni_C_ExecuteUbergraph_FiringComponent_ThunderAni_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


