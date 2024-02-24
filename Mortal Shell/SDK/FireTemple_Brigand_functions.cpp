#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireTemple_Brigand.FireTemple_Brigand_C
// (Actor, Pawn)

class UClass* AFireTemple_Brigand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireTemple_Brigand_C");

	return Clss;
}


// FireTemple_Brigand_C FireTemple_Brigand.Default__FireTemple_Brigand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFireTemple_Brigand_C* AFireTemple_Brigand_C::GetDefaultObj()
{
	static class AFireTemple_Brigand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFireTemple_Brigand_C*>(AFireTemple_Brigand_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FireTemple_Brigand.FireTemple_Brigand_C.ProcessDamageType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageOut                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ProcessDamageType_DamageOut                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFireTemple_Brigand_C::ProcessDamageType(class UDamageType* DamageType, float DamageIn, float* DamageOut, float CallFunc_ProcessDamageType_DamageOut, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireTemple_Brigand_C", "ProcessDamageType");

	Params::AFireTemple_Brigand_C_ProcessDamageType_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.DamageIn = DamageIn;
	Parms.CallFunc_ProcessDamageType_DamageOut = CallFunc_ProcessDamageType_DamageOut;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageOut != nullptr)
		*DamageOut = Parms.DamageOut;

}

}


