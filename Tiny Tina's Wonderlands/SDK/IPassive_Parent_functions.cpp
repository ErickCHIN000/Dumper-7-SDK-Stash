#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IPassive_Parent.IPassive_Parent_C
// (None)

class UClass* IIPassive_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IPassive_Parent_C");

	return Clss;
}


// IPassive_Parent_C IPassive_Parent.Default__IPassive_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIPassive_Parent_C* IIPassive_Parent_C::GetDefaultObj()
{
	static class IIPassive_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIPassive_Parent_C*>(IIPassive_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IPassive_Parent.IPassive_Parent_C.GetSkillGrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPassive_Parent_C::GetSkillGrade(int32* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPassive_Parent_C", "GetSkillGrade");

	Params::IIPassive_Parent_C_GetSkillGrade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


