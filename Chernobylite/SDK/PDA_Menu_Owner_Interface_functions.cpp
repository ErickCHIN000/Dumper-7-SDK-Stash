#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PDA_Menu_Owner_Interface.PDA_Menu_Owner_Interface_C
// (None)

class UClass* IPDA_Menu_Owner_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PDA_Menu_Owner_Interface_C");

	return Clss;
}


// PDA_Menu_Owner_Interface_C PDA_Menu_Owner_Interface.Default__PDA_Menu_Owner_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IPDA_Menu_Owner_Interface_C* IPDA_Menu_Owner_Interface_C::GetDefaultObj()
{
	static class IPDA_Menu_Owner_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IPDA_Menu_Owner_Interface_C*>(IPDA_Menu_Owner_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PDA_Menu_Owner_Interface.PDA_Menu_Owner_Interface_C.ForceBoard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPDA_Menu_Owner_Interface_C::ForceBoard(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_Menu_Owner_Interface_C", "ForceBoard");

	Params::IPDA_Menu_Owner_Interface_C_ForceBoard_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PDA_Menu_Owner_Interface.PDA_Menu_Owner_Interface_C.GetCurrentlySelectedIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IPDA_Menu_Owner_Interface_C::GetCurrentlySelectedIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_Menu_Owner_Interface_C", "GetCurrentlySelectedIndex");

	Params::IPDA_Menu_Owner_Interface_C_GetCurrentlySelectedIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}

}


