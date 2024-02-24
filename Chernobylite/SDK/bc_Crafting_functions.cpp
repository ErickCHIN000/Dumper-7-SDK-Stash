#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bc_Crafting.bc_Crafting_C
// (None)

class UClass* Ubc_Crafting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bc_Crafting_C");

	return Clss;
}


// bc_Crafting_C bc_Crafting.Default__bc_Crafting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubc_Crafting_C* Ubc_Crafting_C::GetDefaultObj()
{
	static class Ubc_Crafting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubc_Crafting_C*>(Ubc_Crafting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bc_Crafting.bc_Crafting_C.FireUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_Crafting_C::FireUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "FireUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_Crafting.bc_Crafting_C.End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_Crafting_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_Crafting.bc_Crafting_C.InputDPadUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_Crafting_C::InputDPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "InputDPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_Crafting.bc_Crafting_C.InputDPadDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_Crafting_C::InputDPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "InputDPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_Crafting.bc_Crafting_C.InputLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_Crafting_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_Crafting.bc_Crafting_C.InputRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_Crafting_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_Crafting.bc_Crafting_C.InputDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_Crafting_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_Crafting.bc_Crafting_C.InputUp
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_Crafting_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_Crafting.bc_Crafting_C.InputFaceDown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_Crafting_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_Crafting.bc_Crafting_C.InputFaceDownRelease
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_Crafting_C::InputFaceDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "InputFaceDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_Crafting.bc_Crafting_C.InputFaceRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_Crafting_C::InputFaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "InputFaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_Crafting.bc_Crafting_C.InputDPadLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_Crafting_C::InputDPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "InputDPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_Crafting.bc_Crafting_C.InputDPadRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ubc_Crafting_C::InputDPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "InputDPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bc_Crafting.bc_Crafting_C.ExecuteUbergraph_bc_Crafting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_A7B6774E4FFD2DEC39C18BBAB251C8BC_Variable              (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_A7B6774E4FFD2DEC39C18BBAB251C8BC_Variable_1            (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_pda_Crafting_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubc_Crafting_C::ExecuteUbergraph_bc_Crafting(int32 EntryPoint, bool Temp_bool_A7B6774E4FFD2DEC39C18BBAB251C8BC_Variable, bool Temp_bool_A7B6774E4FFD2DEC39C18BBAB251C8BC_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_pda_Crafting_C* CallFunc_Create_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bc_Crafting_C", "ExecuteUbergraph_bc_Crafting");

	Params::Ubc_Crafting_C_ExecuteUbergraph_bc_Crafting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_A7B6774E4FFD2DEC39C18BBAB251C8BC_Variable = Temp_bool_A7B6774E4FFD2DEC39C18BBAB251C8BC_Variable;
	Parms.Temp_bool_A7B6774E4FFD2DEC39C18BBAB251C8BC_Variable_1 = Temp_bool_A7B6774E4FFD2DEC39C18BBAB251C8BC_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_SetNewMovementState_ReturnValue_1 = CallFunc_SetNewMovementState_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


