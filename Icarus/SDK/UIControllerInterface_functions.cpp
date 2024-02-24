#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UIControllerInterface.UIControllerInterface_C
// (None)

class UClass* IUIControllerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIControllerInterface_C");

	return Clss;
}


// UIControllerInterface_C UIControllerInterface.Default__UIControllerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IUIControllerInterface_C* IUIControllerInterface_C::GetDefaultObj()
{
	static class IUIControllerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IUIControllerInterface_C*>(IUIControllerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIControllerInterface.UIControllerInterface_C.GetUserInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UUMG_UserInterface_Base_C*   UserInterface                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUIControllerInterface_C::GetUserInterface(class UUMG_UserInterface_Base_C** UserInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIControllerInterface_C", "GetUserInterface");

	Params::IUIControllerInterface_C_GetUserInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UserInterface != nullptr)
		*UserInterface = Parms.UserInterface;

}

}


