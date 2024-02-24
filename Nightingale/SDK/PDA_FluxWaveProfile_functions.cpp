#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PDA_FluxWaveProfile.PDA_FluxWaveProfile_C
// (None)

class UClass* UPDA_FluxWaveProfile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PDA_FluxWaveProfile_C");

	return Clss;
}


// PDA_FluxWaveProfile_C PDA_FluxWaveProfile.Default__PDA_FluxWaveProfile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPDA_FluxWaveProfile_C* UPDA_FluxWaveProfile_C::GetDefaultObj()
{
	static class UPDA_FluxWaveProfile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPDA_FluxWaveProfile_C*>(UPDA_FluxWaveProfile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PDA_FluxWaveProfile.PDA_FluxWaveProfile_C.GetExternalReferences
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture*>            Objects                                                          (Parm, OutParm)
// TArray<class UTexture*>            K2Node_MakeArray_Array                                           (ReferenceParm)

void UPDA_FluxWaveProfile_C::GetExternalReferences(TArray<class UTexture*>* Objects, TArray<class UTexture*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_FluxWaveProfile_C", "GetExternalReferences");

	Params::UPDA_FluxWaveProfile_C_GetExternalReferences_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Objects != nullptr)
		*Objects = std::move(Parms.Objects);

}


// Function PDA_FluxWaveProfile.PDA_FluxWaveProfile_C.CopyPropertiesToObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Destination                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Done                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPDA_FluxWaveProfile_C::CopyPropertiesToObject(class UObject* Destination, bool* Done)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_FluxWaveProfile_C", "CopyPropertiesToObject");

	Params::UPDA_FluxWaveProfile_C_CopyPropertiesToObject_Params Parms{};

	Parms.Destination = Destination;

	UObject::ProcessEvent(Func, &Parms);

	if (Done != nullptr)
		*Done = Parms.Done;

}


// Function PDA_FluxWaveProfile.PDA_FluxWaveProfile_C.ApplyWaveProfileNiagaraData
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector4                    CallFunc_MakeVector4_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector4_X_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector4_Y_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector4_Z_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector4_W_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPDA_FluxWaveProfile_C::ApplyWaveProfileNiagaraData(class UNiagaraComponent* NiagaraSystem, const struct FVector4& CallFunc_MakeVector4_ReturnValue, double CallFunc_MakeVector4_X_ImplicitCast, double CallFunc_MakeVector4_Y_ImplicitCast, double CallFunc_MakeVector4_Z_ImplicitCast, double CallFunc_MakeVector4_W_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_FluxWaveProfile_C", "ApplyWaveProfileNiagaraData");

	Params::UPDA_FluxWaveProfile_C_ApplyWaveProfileNiagaraData_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.CallFunc_MakeVector4_ReturnValue = CallFunc_MakeVector4_ReturnValue;
	Parms.CallFunc_MakeVector4_X_ImplicitCast = CallFunc_MakeVector4_X_ImplicitCast;
	Parms.CallFunc_MakeVector4_Y_ImplicitCast = CallFunc_MakeVector4_Y_ImplicitCast;
	Parms.CallFunc_MakeVector4_Z_ImplicitCast = CallFunc_MakeVector4_Z_ImplicitCast;
	Parms.CallFunc_MakeVector4_W_ImplicitCast = CallFunc_MakeVector4_W_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PDA_FluxWaveProfile.PDA_FluxWaveProfile_C.ApplyWaveProfileMaterialData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<class UMaterialInstanceDynamic*>Materials                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPDA_FluxWaveProfile_C::ApplyWaveProfileMaterialData(TArray<class UMaterialInstanceDynamic*>& Materials, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_FluxWaveProfile_C", "ApplyWaveProfileMaterialData");

	Params::UPDA_FluxWaveProfile_C_ApplyWaveProfileMaterialData_Params Parms{};

	Parms.Materials = Materials;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PDA_FluxWaveProfile.PDA_FluxWaveProfile_C.SetWaveProfileData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    WaveProfilesForward                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    WaveProfilesInverse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                WaveProfileDecode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Frames                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WaveWidth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              WaveHeight                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPDA_FluxWaveProfile_C::SetWaveProfileData(class UTexture* WaveProfilesForward, class UTexture* WaveProfilesInverse, const struct FLinearColor& WaveProfileDecode, int32 Frames, int32 WaveWidth, int32 WaveHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_FluxWaveProfile_C", "SetWaveProfileData");

	Params::UPDA_FluxWaveProfile_C_SetWaveProfileData_Params Parms{};

	Parms.WaveProfilesForward = WaveProfilesForward;
	Parms.WaveProfilesInverse = WaveProfilesInverse;
	Parms.WaveProfileDecode = WaveProfileDecode;
	Parms.Frames = Frames;
	Parms.WaveWidth = WaveWidth;
	Parms.WaveHeight = WaveHeight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PDA_FluxWaveProfile.PDA_FluxWaveProfile_C.ClearExternalReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPDA_FluxWaveProfile_C::ClearExternalReferences()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_FluxWaveProfile_C", "ClearExternalReferences");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PDA_FluxWaveProfile.PDA_FluxWaveProfile_C.ExecuteUbergraph_PDA_FluxWaveProfile
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPDA_FluxWaveProfile_C::ExecuteUbergraph_PDA_FluxWaveProfile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PDA_FluxWaveProfile_C", "ExecuteUbergraph_PDA_FluxWaveProfile");

	Params::UPDA_FluxWaveProfile_C_ExecuteUbergraph_PDA_FluxWaveProfile_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


