#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass _Feat_Parent._Feat_Parent_C
// (None)

class UClass* U_Feat_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("_Feat_Parent_C");

	return Clss;
}


// _Feat_Parent_C _Feat_Parent.Default___Feat_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_Feat_Parent_C* U_Feat_Parent_C::GetDefaultObj()
{
	static class U_Feat_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<U_Feat_Parent_C*>(U_Feat_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function _Feat_Parent._Feat_Parent_C.FindAllCompanions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Res                                                              (Parm, OutParm, ZeroConstructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_RunEnvQueryForAllActors_ResultActors                    (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_RunEnvQueryForAllActors_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void U_Feat_Parent_C::FindAllCompanions(TArray<class AActor*>* Res, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Feat_Parent_C", "FindAllCompanions");

	Params::U_Feat_Parent_C_FindAllCompanions_Params Parms{};

	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_RunEnvQueryForAllActors_ResultActors = CallFunc_RunEnvQueryForAllActors_ResultActors;
	Parms.CallFunc_RunEnvQueryForAllActors_ReturnValue = CallFunc_RunEnvQueryForAllActors_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = std::move(Parms.Res);

}


// Function _Feat_Parent._Feat_Parent_C.FindAllPlayerCharacters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              Res                                                              (Parm, OutParm, ZeroConstructor)
// TArray<class AActor*>              LocalList                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_RunEnvQueryForAllActors_ResultActors                    (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_RunEnvQueryForAllActors_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_Feat_Parent_C::FindAllPlayerCharacters(TArray<class AActor*>* Res, const TArray<class AActor*>& LocalList, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Feat_Parent_C", "FindAllPlayerCharacters");

	Params::U_Feat_Parent_C_FindAllPlayerCharacters_Params Parms{};

	Parms.LocalList = LocalList;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_RunEnvQueryForAllActors_ResultActors = CallFunc_RunEnvQueryForAllActors_ResultActors;
	Parms.CallFunc_RunEnvQueryForAllActors_ReturnValue = CallFunc_RunEnvQueryForAllActors_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = std::move(Parms.Res);

}


// Function _Feat_Parent._Feat_Parent_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void U_Feat_Parent_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Feat_Parent_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function _Feat_Parent._Feat_Parent_C.ExecuteUbergraph__Feat_Parent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void U_Feat_Parent_C::ExecuteUbergraph__Feat_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("_Feat_Parent_C", "ExecuteUbergraph__Feat_Parent");

	Params::U_Feat_Parent_C_ExecuteUbergraph__Feat_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


