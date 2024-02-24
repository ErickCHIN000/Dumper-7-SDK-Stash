#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_NPCInterfaces.BPI_NPCInterfaces_C
// (None)

class UClass* IBPI_NPCInterfaces_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_NPCInterfaces_C");

	return Clss;
}


// BPI_NPCInterfaces_C BPI_NPCInterfaces.Default__BPI_NPCInterfaces_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_NPCInterfaces_C* IBPI_NPCInterfaces_C::GetDefaultObj()
{
	static class IBPI_NPCInterfaces_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_NPCInterfaces_C*>(IBPI_NPCInterfaces_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_NPCInterfaces.BPI_NPCInterfaces_C.GetNPCInfoForUIInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_NPCInfoForUI_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCInterfaces_C::GetNPCInfoForUIInterface(TScriptInterface<class IBPI_NPCInfoForUI_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCInterfaces_C", "GetNPCInfoForUIInterface");

	Params::IBPI_NPCInterfaces_C_GetNPCInfoForUIInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BPI_NPCInterfaces.BPI_NPCInterfaces_C.GetNPCFriendshipInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_NPCFriendship_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCInterfaces_C::GetNPCFriendshipInterface(TScriptInterface<class IBPI_NPCFriendship_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCInterfaces_C", "GetNPCFriendshipInterface");

	Params::IBPI_NPCInterfaces_C_GetNPCFriendshipInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BPI_NPCInterfaces.BPI_NPCInterfaces_C.GetNPCDialogueInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_NPCDialogue_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCInterfaces_C::GetNPCDialogueInterface(TScriptInterface<class IBPI_NPCDialogue_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCInterfaces_C", "GetNPCDialogueInterface");

	Params::IBPI_NPCInterfaces_C_GetNPCDialogueInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BPI_NPCInterfaces.BPI_NPCInterfaces_C.GetNPCContractInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_NPCContract_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_NPCInterfaces_C::GetNPCContractInterface(TScriptInterface<class IBPI_NPCContract_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCInterfaces_C", "GetNPCContractInterface");

	Params::IBPI_NPCInterfaces_C_GetNPCContractInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}

}


