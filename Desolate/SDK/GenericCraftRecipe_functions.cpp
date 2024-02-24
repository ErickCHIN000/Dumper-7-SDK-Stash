#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericCraftRecipe.GenericCraftRecipe_C
// (Actor)

class UClass* AGenericCraftRecipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericCraftRecipe_C");

	return Clss;
}


// GenericCraftRecipe_C GenericCraftRecipe.Default__GenericCraftRecipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericCraftRecipe_C* AGenericCraftRecipe_C::GetDefaultObj()
{
	static class AGenericCraftRecipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericCraftRecipe_C*>(AGenericCraftRecipe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericCraftRecipe.GenericCraftRecipe_C.UpdateCollectibleVisibilityLocalEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCollectibleVisible_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGenericCraftRecipe_C::UpdateCollectibleVisibilityLocalEvent(bool CallFunc_IsCollectibleVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericCraftRecipe_C", "UpdateCollectibleVisibilityLocalEvent");

	Params::AGenericCraftRecipe_C_UpdateCollectibleVisibilityLocalEvent_Params Parms{};

	Parms.CallFunc_IsCollectibleVisible_ReturnValue = CallFunc_IsCollectibleVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GenericCraftRecipe.GenericCraftRecipe_C.IsCollectibleVisible
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_DynamicCast_AsSHPlayer_Character                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRecipeLearnedByKey_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGenericCraftRecipe_C::IsCollectibleVisible(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsRecipeLearnedByKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericCraftRecipe_C", "IsCollectibleVisible");

	Params::AGenericCraftRecipe_C_IsCollectibleVisible_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsSHPlayer_Character = K2Node_DynamicCast_AsSHPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsRecipeLearnedByKey_ReturnValue = CallFunc_IsRecipeLearnedByKey_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GenericCraftRecipe.GenericCraftRecipe_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGenericCraftRecipe_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericCraftRecipe_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericCraftRecipe.GenericCraftRecipe_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericCraftRecipe_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericCraftRecipe_C", "OnUse");

	Params::AGenericCraftRecipe_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GenericCraftRecipe.GenericCraftRecipe_C.ExecuteUbergraph_GenericCraftRecipe
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRecipeLearnedByKey_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AGenericCraftRecipe_C::ExecuteUbergraph_GenericCraftRecipe(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsRecipeLearnedByKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericCraftRecipe_C", "ExecuteUbergraph_GenericCraftRecipe");

	Params::AGenericCraftRecipe_C_ExecuteUbergraph_GenericCraftRecipe_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsRecipeLearnedByKey_ReturnValue = CallFunc_IsRecipeLearnedByKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


