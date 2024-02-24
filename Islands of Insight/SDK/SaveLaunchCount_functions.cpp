#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SaveLaunchCount.SaveLaunchCount_C
// (None)

class UClass* USaveLaunchCount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SaveLaunchCount_C");

	return Clss;
}


// SaveLaunchCount_C SaveLaunchCount.Default__SaveLaunchCount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USaveLaunchCount_C* USaveLaunchCount_C::GetDefaultObj()
{
	static class USaveLaunchCount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USaveLaunchCount_C*>(USaveLaunchCount_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SaveLaunchCount.SaveLaunchCount_C.AddLaunchCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USaveLaunchCount_C::AddLaunchCount(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SaveLaunchCount_C", "AddLaunchCount");

	Params::USaveLaunchCount_C_AddLaunchCount_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


