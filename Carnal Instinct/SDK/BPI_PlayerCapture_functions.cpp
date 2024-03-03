#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_PlayerCapture.BPI_PlayerCapture_C
// (None)

class UClass* IBPI_PlayerCapture_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_PlayerCapture_C");

	return Clss;
}


// BPI_PlayerCapture_C BPI_PlayerCapture.Default__BPI_PlayerCapture_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_PlayerCapture_C* IBPI_PlayerCapture_C::GetDefaultObj()
{
	static class IBPI_PlayerCapture_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_PlayerCapture_C*>(IBPI_PlayerCapture_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_PlayerCapture.BPI_PlayerCapture_C.PassReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCapture_C*         Capture_Reference                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_PlayerCapture_C::PassReference(class ABP_PlayerCapture_C* Capture_Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerCapture_C", "PassReference");

	Params::IBPI_PlayerCapture_C_PassReference_Params Parms{};

	Parms.Capture_Reference = Capture_Reference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_PlayerCapture.BPI_PlayerCapture_C.Detach from Player Capture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemData                 Item_Data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void IBPI_PlayerCapture_C::Detach_from_Player_Capture(const struct FS_ItemData& Item_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerCapture_C", "Detach from Player Capture");

	Params::IBPI_PlayerCapture_C_Detach_from_Player_Capture_Params Parms{};

	Parms.Item_Data = Item_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_PlayerCapture.BPI_PlayerCapture_C.Attach to Player Capture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_ItemData                 Item_Data                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)

void IBPI_PlayerCapture_C::Attach_to_Player_Capture(const struct FS_ItemData& Item_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlayerCapture_C", "Attach to Player Capture");

	Params::IBPI_PlayerCapture_C_Attach_to_Player_Capture_Params Parms{};

	Parms.Item_Data = Item_Data;

	UObject::ProcessEvent(Func, &Parms);

}

}


