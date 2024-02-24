#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CustomizationDummy.BP_CustomizationDummy_C
// (Actor)

class UClass* ABP_CustomizationDummy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CustomizationDummy_C");

	return Clss;
}


// BP_CustomizationDummy_C BP_CustomizationDummy.Default__BP_CustomizationDummy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CustomizationDummy_C* ABP_CustomizationDummy_C::GetDefaultObj()
{
	static class ABP_CustomizationDummy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CustomizationDummy_C*>(ABP_CustomizationDummy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.GetCustomizationData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomizationData          Info                                                             (Parm, OutParm, NoDestructor)

void ABP_CustomizationDummy_C::GetCustomizationData(struct FCustomizationData* Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "GetCustomizationData");

	Params::ABP_CustomizationDummy_C_GetCustomizationData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.GetCustomizationWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharacterCreation2_C*   Return                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::GetCustomizationWidget(class UWBP_CharacterCreation2_C** Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "GetCustomizationWidget");

	Params::ABP_CustomizationDummy_C_GetCustomizationWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.HandleHeadMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationMaterialInfo  CallFunc_Array_Get_Item                                          (None)
// class UMaterialInstance*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::HandleHeadMaterial(class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, const struct FCustomizationMaterialInfo& CallFunc_Array_Get_Item, class UMaterialInstance* CallFunc_Array_Get_Item_1, class UMaterialInstance* CallFunc_Array_Get_Item_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstance* CallFunc_Array_Get_Item_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "HandleHeadMaterial");

	Params::ABP_CustomizationDummy_C_HandleHeadMaterial_Params Parms{};

	Parms.CallFunc_GetCostumeDataAsset_ReturnValue = CallFunc_GetCostumeDataAsset_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.IsEthricHair
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// int32                              CallFunc_GetEthricIndex_Array_Index                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_ByteByte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_CustomizationDummy_C::IsEthricHair(const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_GetEthricIndex_Array_Index, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool CallFunc_GreaterEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "IsEthricHair");

	Params::ABP_CustomizationDummy_C_IsEthricHair_Params Parms{};

	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_GetEthricIndex_Array_Index = CallFunc_GetEthricIndex_Array_Index;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GreaterEqual_ByteByte_ReturnValue = CallFunc_GreaterEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.Handle Hair And Scalp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1   (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2   (NoDestructor)
// bool                               CallFunc_IsEthricHair_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEthricHair_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLinearColor>        K2Node_Select_Default_2                                          (ReferenceParm)
// TArray<struct FLinearColor>        K2Node_Select_Default_3                                          (ReferenceParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCustomizationMaterialInfo  CallFunc_Array_Get_Item                                          (None)
// class UStaticMesh*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CustomizationDummy_C::Handle_Hair_And_Scalp(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class UStaticMesh* Temp_object_Variable, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2, bool CallFunc_IsEthricHair_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, bool CallFunc_IsEthricHair_ReturnValue_1, uint8 K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, uint8 K2Node_Select_Default_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_1, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_2, TArray<struct FLinearColor>& K2Node_Select_Default_2, TArray<struct FLinearColor>& K2Node_Select_Default_3, int32 Temp_int_Variable, bool Temp_bool_Variable_5, int32 K2Node_Select_Default_4, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FCustomizationMaterialInfo& CallFunc_Array_Get_Item, class UStaticMesh* CallFunc_Array_Get_Item_1, class UMaterialInstance* CallFunc_Array_Get_Item_2, class UStaticMesh* K2Node_Select_Default_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item_3, class UStaticMesh* CallFunc_Array_Get_Item_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "Handle Hair And Scalp");

	Params::ABP_CustomizationDummy_C_Handle_Hair_And_Scalp_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2;
	Parms.CallFunc_IsEthricHair_ReturnValue = CallFunc_IsEthricHair_ReturnValue;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue = CallFunc_GetCostumeDataAsset_ReturnValue;
	Parms.CallFunc_IsEthricHair_ReturnValue_1 = CallFunc_IsEthricHair_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_1 = CallFunc_GetCostumeDataAsset_ReturnValue_1;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_2 = CallFunc_GetCostumeDataAsset_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.HandleFaceTattoo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              InByte                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue                 (None)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue_1               (None)
// class UTexture2D*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::HandleFaceTattoo(uint8 InByte, bool CallFunc_Greater_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue_1, class UTexture2D* CallFunc_Array_Get_Item, class UTexture2D* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "HandleFaceTattoo");

	Params::ABP_CustomizationDummy_C_HandleFaceTattoo_Params Parms{};

	Parms.InByte = InByte;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue = CallFunc_GetCustomizationDataByIndex_ReturnValue;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue_1 = CallFunc_GetCustomizationDataByIndex_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.HandleBodyTattoo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::HandleBodyTattoo(uint8 A, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "HandleBodyTattoo");

	Params::ABP_CustomizationDummy_C_HandleBodyTattoo_Params Parms{};

	Parms.A = A;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.TEMP_SetMeshvisibleInsteadOfFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewVisibility                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CustomizationDummy_C::TEMP_SetMeshvisibleInsteadOfFade(bool bNewVisibility, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "TEMP_SetMeshvisibleInsteadOfFade");

	Params::ABP_CustomizationDummy_C_TEMP_SetMeshvisibleInsteadOfFade_Params Parms{};

	Parms.bNewVisibility = bNewVisibility;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.UpdateSex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationMaterialInfo  CallFunc_Array_Get_Item                                          (None)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::UpdateSex(int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, bool CallFunc_IsValid_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_1, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_4, const struct FCustomizationMaterialInfo& CallFunc_Array_Get_Item, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_5, class UMaterialInstance* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item_3, class USkeletalMesh* CallFunc_Array_Get_Item_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "UpdateSex");

	Params::ABP_CustomizationDummy_C_UpdateSex_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue = CallFunc_GetCostumeDataAsset_ReturnValue;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_1 = CallFunc_GetCostumeDataAsset_ReturnValue_1;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_2 = CallFunc_GetCostumeDataAsset_ReturnValue_2;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_3 = CallFunc_GetCostumeDataAsset_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_4 = CallFunc_GetCostumeDataAsset_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_5 = CallFunc_GetCostumeDataAsset_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_6 = CallFunc_GetCostumeDataAsset_ReturnValue_6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.HandleCustomizationUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1   (NoDestructor)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2   (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_3   (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationMaterialInfo  CallFunc_Array_Get_Item                                          (None)
// class UMaterialInstance*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationMaterialInfo  CallFunc_Array_Get_Item_5                                        (None)
// class UMaterialInstance*           CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::HandleCustomizationUpdate(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_1, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_3, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_4, const struct FCustomizationMaterialInfo& CallFunc_Array_Get_Item, class UMaterialInstance* CallFunc_Array_Get_Item_1, class USkeletalMesh* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, class USkeletalMesh* CallFunc_Array_Get_Item_3, int32 CallFunc_Add_IntInt_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UNiagaraComponent* CallFunc_Array_Get_Item_4, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_7, const struct FCustomizationMaterialInfo& CallFunc_Array_Get_Item_5, class UMaterialInstance* CallFunc_Array_Get_Item_6, class UMaterialInstance* CallFunc_Array_Get_Item_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "HandleCustomizationUpdate");

	Params::ABP_CustomizationDummy_C_HandleCustomizationUpdate_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue = CallFunc_GetCostumeDataAsset_ReturnValue;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_3 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_4 = CallFunc_Conv_ByteToInt_ReturnValue_4;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_5 = CallFunc_Conv_ByteToInt_ReturnValue_5;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_1 = CallFunc_GetCostumeDataAsset_ReturnValue_1;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_2 = CallFunc_GetCostumeDataAsset_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_3 = CallFunc_GetCostumeDataAsset_ReturnValue_3;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_4 = CallFunc_GetCostumeDataAsset_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_5 = CallFunc_GetCostumeDataAsset_ReturnValue_5;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_6 = CallFunc_GetCostumeDataAsset_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_7 = CallFunc_GetCostumeDataAsset_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.SetMaterialsForCharacterRevealEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Character_Visibility                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CustomizationDummy_C::SetMaterialsForCharacterRevealEffect(float Character_Visibility, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "SetMaterialsForCharacterRevealEffect");

	Params::ABP_CustomizationDummy_C_SetMaterialsForCharacterRevealEffect_Params Parms{};

	Parms.Character_Visibility = Character_Visibility;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.ActivateCharacterRevealEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              LifeTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CustomizationDummy_C::ActivateCharacterRevealEffect(float LifeTime, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class USkeletalMeshComponent* CallFunc_Array_Get_Item, class UNiagaraComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "ActivateCharacterRevealEffect");

	Params::ABP_CustomizationDummy_C_ActivateCharacterRevealEffect_Params Parms{};

	Parms.LifeTime = LifeTime;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.SpawnLostSpiritAndCharacterRevealEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LostSpirit_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::SpawnLostSpiritAndCharacterRevealEffect(int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_LostSpirit_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "SpawnLostSpiritAndCharacterRevealEffect");

	Params::ABP_CustomizationDummy_C_SpawnLostSpiritAndCharacterRevealEffect_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.AddSkeletalMeshesToArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::AddSkeletalMeshesToArray(int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "AddSkeletalMeshesToArray");

	Params::ABP_CustomizationDummy_C_AddSkeletalMeshesToArray_Params Parms{};

	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.UpdateSkinMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CustomizationDummy_C::UpdateSkinMaterial(const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, bool CallFunc_Conv_IntToBool_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, bool CallFunc_Conv_IntToBool_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "UpdateSkinMaterial");

	Params::ABP_CustomizationDummy_C_UpdateSkinMaterial_Params Parms{};

	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_4 = CallFunc_Conv_ByteToInt_ReturnValue_4;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_1 = CallFunc_Conv_IntToBool_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_5 = CallFunc_Conv_ByteToInt_ReturnValue_5;
	Parms.CallFunc_Conv_IntToBool_ReturnValue_2 = CallFunc_Conv_IntToBool_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.GetOutfitMaterial
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FCostume>            Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UMaterialInstance*           Output                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCostume                    CallFunc_Array_Get_Item                                          (None)
// class UMaterialInstance*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::GetOutfitMaterial(TArray<struct FCostume>& Array, class UMaterialInstance** Output, const struct FCostume& CallFunc_Array_Get_Item, class UMaterialInstance* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "GetOutfitMaterial");

	Params::ABP_CustomizationDummy_C_GetOutfitMaterial_Params Parms{};

	Parms.Array = Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.GetLocalClothes
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ClothesVal                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HeadPieceVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GlovesVal                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::GetLocalClothes(int32* ClothesVal, int32* HeadPieceVal, int32* GlovesVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "GetLocalClothes");

	Params::ABP_CustomizationDummy_C_GetLocalClothes_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ClothesVal != nullptr)
		*ClothesVal = Parms.ClothesVal;

	if (HeadPieceVal != nullptr)
		*HeadPieceVal = Parms.HeadPieceVal;

	if (GlovesVal != nullptr)
		*GlovesVal = Parms.GlovesVal;

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.GetMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        StaticMesh                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::GetMesh(class UStaticMeshComponent** StaticMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "GetMesh");

	Params::ABP_CustomizationDummy_C_GetMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (StaticMesh != nullptr)
		*StaticMesh = Parms.StaticMesh;

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.GetCostumeDataAsset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCharacterCustomizationDataAsset*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCharacterCustomizationDataAsset* ABP_CustomizationDummy_C::GetCostumeDataAsset(bool CallFunc_IsValid_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "GetCostumeDataAsset");

	Params::ABP_CustomizationDummy_C_GetCostumeDataAsset_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.HandleMeshDynamicMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Mat                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    Instance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::HandleMeshDynamicMaterial(class UPrimitiveComponent* Mesh, class UMaterialInterface* Mat, class UMaterialInstanceDynamic*& Instance, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "HandleMeshDynamicMaterial");

	Params::ABP_CustomizationDummy_C_HandleMeshDynamicMaterial_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.Mat = Mat;
	Parms.Instance = Instance;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.SetWingsMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MeshIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue                 (None)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::SetWingsMaterial(int32 Selection, int32 MeshIndex, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "SetWingsMaterial");

	Params::ABP_CustomizationDummy_C_SetWingsMaterial_Params Parms{};

	Parms.Selection = Selection;
	Parms.MeshIndex = MeshIndex;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue = CallFunc_GetCostumeDataAsset_ReturnValue;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue = CallFunc_GetCustomizationDataByIndex_ReturnValue;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_1 = CallFunc_GetCostumeDataAsset_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.SetWingsMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InVal                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue                 (None)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::SetWingsMesh(int32 InVal, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "SetWingsMesh");

	Params::ABP_CustomizationDummy_C_SetWingsMesh_Params Parms{};

	Parms.InVal = InVal;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue = CallFunc_GetCostumeDataAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue = CallFunc_GetCustomizationDataByIndex_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CustomizationDummy_C::UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "UserConstructionScript");

	Params::ABP_CustomizationDummy_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.CharacterRotLerp__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::CharacterRotLerp__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "CharacterRotLerp__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.CharacterRotLerp__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::CharacterRotLerp__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "CharacterRotLerp__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.MoveLostSpiritTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::MoveLostSpiritTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "MoveLostSpiritTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.MoveLostSpiritTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::MoveLostSpiritTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "MoveLostSpiritTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.CharacterRevealTimeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::CharacterRevealTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "CharacterRevealTimeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.CharacterRevealTimeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::CharacterRevealTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "CharacterRevealTimeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnChangeGlideTrailColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnChangeGlideTrailColor(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnChangeGlideTrailColor");

	Params::ABP_CustomizationDummy_C_OnChangeGlideTrailColor_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnHairChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnHairChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnHairChanged");

	Params::ABP_CustomizationDummy_C_OnHairChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnClothesColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnClothesColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnClothesColorChanged");

	Params::ABP_CustomizationDummy_C_OnClothesColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnGlovesColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnGlovesColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnGlovesColorChanged");

	Params::ABP_CustomizationDummy_C_OnGlovesColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnHeadPieceColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnHeadPieceColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnHeadPieceColorChanged");

	Params::ABP_CustomizationDummy_C_OnHeadPieceColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnSkinColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnSkinColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnSkinColorChanged");

	Params::ABP_CustomizationDummy_C_OnSkinColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnHairColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnHairColorChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnHairColorChanged");

	Params::ABP_CustomizationDummy_C_OnHairColorChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnTrailColorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnTrailColorChanged(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnTrailColorChanged");

	Params::ABP_CustomizationDummy_C_OnTrailColorChanged_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnEnterExitWingsMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CustomizationDummy_C::OnEnterExitWingsMenu(bool Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnEnterExitWingsMenu");

	Params::ABP_CustomizationDummy_C_OnEnterExitWingsMenu_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnChangedWingsMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnChangedWingsMesh(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnChangedWingsMesh");

	Params::ABP_CustomizationDummy_C_OnChangedWingsMesh_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnChangedWingsColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnChangedWingsColor(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnChangedWingsColor");

	Params::ABP_CustomizationDummy_C_OnChangedWingsColor_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnSexChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::OnSexChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnSexChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::OnCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::OnConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.UpdateToMatchLocalCustomization
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::UpdateToMatchLocalCustomization()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "UpdateToMatchLocalCustomization");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.FromTrails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CustomizationDummy_C::FromTrails(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "FromTrails");

	Params::ABP_CustomizationDummy_C_FromTrails_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.StartRotLerp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::StartRotLerp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "StartRotLerp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.EndRotLerp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::EndRotLerp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "EndRotLerp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "ReceiveTick");

	Params::ABP_CustomizationDummy_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnSkinEffectsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sheen                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Emissive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Edge                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CustomizationDummy_C::OnSkinEffectsChanged(bool Sheen, bool Emissive, bool Edge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnSkinEffectsChanged");

	Params::ABP_CustomizationDummy_C_OnSkinEffectsChanged_Params Parms{};

	Parms.Sheen = Sheen;
	Parms.Emissive = Emissive;
	Parms.Edge = Edge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnMaterialScalarValueChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Wetness                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Divisor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnMaterialScalarValueChanged(int32 Wetness, class FName Name, float Divisor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnMaterialScalarValueChanged");

	Params::ABP_CustomizationDummy_C_OnMaterialScalarValueChanged_Params Parms{};

	Parms.Wetness = Wetness;
	Parms.Name = Name;
	Parms.Divisor = Divisor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.MoveLostSpirit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::MoveLostSpirit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "MoveLostSpirit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.RevealCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              LifeTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::RevealCharacter(float LifeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "RevealCharacter");

	Params::ABP_CustomizationDummy_C_RevealCharacter_Params Parms{};

	Parms.LifeTime = LifeTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnClothesChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnClothesChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnClothesChanged");

	Params::ABP_CustomizationDummy_C_OnClothesChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnHeadPieceChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnHeadPieceChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnHeadPieceChanged");

	Params::ABP_CustomizationDummy_C_OnHeadPieceChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnGlovesChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnGlovesChanged(int32 Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnGlovesChanged");

	Params::ABP_CustomizationDummy_C_OnGlovesChanged_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.DeactivateLostSpirit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::DeactivateLostSpirit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "DeactivateLostSpirit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.OnTrailSystemChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CustomizationDummy_C::OnTrailSystemChange(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "OnTrailSystemChange");

	Params::ABP_CustomizationDummy_C_OnTrailSystemChange_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.HandleRunning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::HandleRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "HandleRunning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.HandleWings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CustomizationDummy_C::HandleWings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "HandleWings");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomizationDummy.BP_CustomizationDummy_C.ExecuteUbergraph_BP_CustomizationDummy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Val_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Val_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Sheen                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Emissive                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_Edge                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Wetness                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Name                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Divisor                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSplineLength_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Lifetime                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UABP_SophiaBasic_C*          K2Node_DynamicCast_AsABP_Sophia_Basic                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut     (NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue                 (None)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1   (NoDestructor)
// class UTexture2D*                  CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Val                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue_1               (None)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue_1                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue_2                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue_2               (None)
// bool                               CallFunc_WasRecentlyRendered_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMapMenuVisible_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCostumeDataAsset_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BPI_IsFTUE_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2   (NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomizationDataAsset*CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_3   (NoDestructor)
// struct FCustomizationSingle        CallFunc_GetCustomizationDataByIndex_ReturnValue_3               (None)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BPI_IsFTUE_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_Array_Get_Item_9                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_Array_Get_Item_10                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Divide_VectorFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_BoolToByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCustomizationData          CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_4   (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CustomizationDummy_C::ExecuteUbergraph_BP_CustomizationDummy(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class FName Temp_name_Variable, class FName Temp_name_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, class FName K2Node_Select_Default, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Array_Index_Variable_5, int32 K2Node_Event_Val_12, int32 K2Node_Event_Val_11, int32 K2Node_Event_Val_10, int32 K2Node_Event_Val_9, int32 K2Node_Event_Val_8, int32 K2Node_Event_Val_7, int32 K2Node_Event_Val_6, int32 K2Node_Event_Index, bool K2Node_Event_Val_5, int32 K2Node_Event_Val_4, int32 K2Node_Event_Val_3, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_CustomEvent_Value, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, float K2Node_Event_DeltaSeconds, class UNiagaraComponent* CallFunc_Array_Get_Item_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, bool K2Node_Event_Sheen, bool K2Node_Event_Emissive, bool K2Node_Event_Edge, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue_2, int32 K2Node_Event_Wetness, class FName K2Node_Event_Name, float K2Node_Event_Divisor, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float K2Node_CustomEvent_Lifetime, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, int32 K2Node_Event_Val_2, class UABP_SophiaBasic_C* K2Node_DynamicCast_AsABP_Sophia_Basic, bool K2Node_DynamicCast_bSuccess, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1, class UTexture2D* CallFunc_Array_Get_Item_2, class UMaterialInstance* CallFunc_Array_Get_Item_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_6, int32 Temp_int_Array_Index_Variable_6, class UNiagaraComponent* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 K2Node_Event_Val_1, int32 K2Node_Event_Val, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, class UTexture2D* CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_3, class UMaterialInstance* CallFunc_Array_Get_Item_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_CustomEvent_Index, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue_2, bool CallFunc_WasRecentlyRendered_ReturnValue, bool CallFunc_IsMapMenuVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_1, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCostumeDataAsset_ReturnValue_3, bool CallFunc_BPI_IsFTUE_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_2, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, class UCharacterCustomizationDataAsset* CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_2, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_3, const struct FCustomizationSingle& CallFunc_GetCustomizationDataByIndex_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, class UTexture2D* CallFunc_Array_Get_Item_7, class UMaterialInstance* CallFunc_Array_Get_Item_8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, bool CallFunc_BPI_IsFTUE_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, class UNiagaraComponent* CallFunc_Array_Get_Item_9, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_7, bool CallFunc_BooleanAND_ReturnValue_3, class UNiagaraComponent* CallFunc_Array_Get_Item_10, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, uint8 CallFunc_Conv_BoolToByte_ReturnValue, const struct FCustomizationData& CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomizationDummy_C", "ExecuteUbergraph_BP_CustomizationDummy");

	Params::ABP_CustomizationDummy_C_ExecuteUbergraph_BP_CustomizationDummy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.K2Node_Event_Val_12 = K2Node_Event_Val_12;
	Parms.K2Node_Event_Val_11 = K2Node_Event_Val_11;
	Parms.K2Node_Event_Val_10 = K2Node_Event_Val_10;
	Parms.K2Node_Event_Val_9 = K2Node_Event_Val_9;
	Parms.K2Node_Event_Val_8 = K2Node_Event_Val_8;
	Parms.K2Node_Event_Val_7 = K2Node_Event_Val_7;
	Parms.K2Node_Event_Val_6 = K2Node_Event_Val_6;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.K2Node_Event_Val_5 = K2Node_Event_Val_5;
	Parms.K2Node_Event_Val_4 = K2Node_Event_Val_4;
	Parms.K2Node_Event_Val_3 = K2Node_Event_Val_3;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.K2Node_Event_Sheen = K2Node_Event_Sheen;
	Parms.K2Node_Event_Emissive = K2Node_Event_Emissive;
	Parms.K2Node_Event_Edge = K2Node_Event_Edge;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_2 = CallFunc_Conv_BoolToFloat_ReturnValue_2;
	Parms.K2Node_Event_Wetness = K2Node_Event_Wetness;
	Parms.K2Node_Event_Name = K2Node_Event_Name;
	Parms.K2Node_Event_Divisor = K2Node_Event_Divisor;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetSplineLength_ReturnValue = CallFunc_GetSplineLength_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Lifetime = K2Node_CustomEvent_Lifetime;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue_1 = CallFunc_SpawnSystemAttached_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_Event_Val_2 = K2Node_Event_Val_2;
	Parms.K2Node_DynamicCast_AsABP_Sophia_Basic = K2Node_DynamicCast_AsABP_Sophia_Basic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue = CallFunc_GetCustomizationDataByIndex_ReturnValue;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_1 = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.K2Node_Event_Val_1 = K2Node_Event_Val_1;
	Parms.K2Node_Event_Val = K2Node_Event_Val;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue_1 = CallFunc_GetCustomizationDataByIndex_ReturnValue_1;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_GetMaterials_ReturnValue_1 = CallFunc_GetMaterials_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_GetMaterials_ReturnValue_2 = CallFunc_GetMaterials_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue = CallFunc_GetCostumeDataAsset_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue_2 = CallFunc_GetCustomizationDataByIndex_ReturnValue_2;
	Parms.CallFunc_WasRecentlyRendered_ReturnValue = CallFunc_WasRecentlyRendered_ReturnValue;
	Parms.CallFunc_IsMapMenuVisible_ReturnValue = CallFunc_IsMapMenuVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_1 = CallFunc_GetCostumeDataAsset_ReturnValue_1;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_2 = CallFunc_GetCostumeDataAsset_ReturnValue_2;
	Parms.CallFunc_GetCostumeDataAsset_ReturnValue_3 = CallFunc_GetCostumeDataAsset_ReturnValue_3;
	Parms.CallFunc_BPI_IsFTUE_ReturnValue = CallFunc_BPI_IsFTUE_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue_2 = CallFunc_SpawnSystemAttached_ReturnValue_2;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_2;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_2 = CallFunc_GetCustomizationDataAssetByIndex_ReturnValue_2;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_3 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_3;
	Parms.CallFunc_GetCustomizationDataByIndex_ReturnValue_3 = CallFunc_GetCustomizationDataByIndex_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_4 = CallFunc_Conv_ByteToInt_ReturnValue_4;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_5 = CallFunc_Conv_ByteToInt_ReturnValue_5;
	Parms.CallFunc_BPI_IsFTUE_ReturnValue_1 = CallFunc_BPI_IsFTUE_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_10 = CallFunc_Array_Get_Item_10;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character = K2Node_DynamicCast_AsFirst_Person_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Divide_VectorFloat_ReturnValue = CallFunc_Divide_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_BoolToByte_ReturnValue = CallFunc_Conv_BoolToByte_ReturnValue;
	Parms.CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_4 = CallFunc_GetLocalCustomizationInfo_LocalCustomizationDataOut_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


