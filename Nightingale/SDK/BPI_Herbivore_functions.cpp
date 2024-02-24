#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Herbivore.BPI_Herbivore_C
// (None)

class UClass* IBPI_Herbivore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Herbivore_C");

	return Clss;
}


// BPI_Herbivore_C BPI_Herbivore.Default__BPI_Herbivore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Herbivore_C* IBPI_Herbivore_C::GetDefaultObj()
{
	static class IBPI_Herbivore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Herbivore_C*>(IBPI_Herbivore_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Herbivore.BPI_Herbivore_C.GrazeResourceNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AResourceNodeIIMBase*        ResourceNode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Herbivore_C::GrazeResourceNode(class AResourceNodeIIMBase* ResourceNode, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Herbivore_C", "GrazeResourceNode");

	Params::IBPI_Herbivore_C_GrazeResourceNode_Params Parms{};

	Parms.ResourceNode = ResourceNode;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BPI_Herbivore.BPI_Herbivore_C.GetIsHerbivore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsHerbivore                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Herbivore_C::GetIsHerbivore(bool* bIsHerbivore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Herbivore_C", "GetIsHerbivore");

	Params::IBPI_Herbivore_C_GetIsHerbivore_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsHerbivore != nullptr)
		*bIsHerbivore = Parms.bIsHerbivore;

}

}


