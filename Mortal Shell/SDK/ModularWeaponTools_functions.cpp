#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ModularWeaponTools.ModularWeaponTools_C
// (None)

class UClass* UModularWeaponTools_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ModularWeaponTools_C");

	return Clss;
}


// ModularWeaponTools_C ModularWeaponTools.Default__ModularWeaponTools_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UModularWeaponTools_C* UModularWeaponTools_C::GetDefaultObj()
{
	static class UModularWeaponTools_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UModularWeaponTools_C*>(UModularWeaponTools_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ModularWeaponTools.ModularWeaponTools_C.Decompile WeaponCode
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Weapon_Code                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Weapon_Type                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              Weapon_Parts                                                     (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FString>              Weapon_Materials                                                 (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FString>              Local_WeaponMats                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FString>              Local_WeaponParts                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames       (ReferenceParm, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts                  (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Type_from_WeaponCode_Weapon_Type                    (ZeroConstructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Decompile_WeaponCode(const class FString& Weapon_Code, class UObject* __WorldContext, class FString* Weapon_Type, TArray<class FString>* Weapon_Parts, TArray<class FString>* Weapon_Materials, const TArray<class FString>& Local_WeaponMats, const TArray<class FString>& Local_WeaponParts, TArray<class FString>& CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames, TArray<class FString>& CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts, const class FString& CallFunc_Get_Type_from_WeaponCode_Weapon_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Decompile WeaponCode");

	Params::UModularWeaponTools_C_Decompile_WeaponCode_Params Parms{};

	Parms.Weapon_Code = Weapon_Code;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_WeaponMats = Local_WeaponMats;
	Parms.Local_WeaponParts = Local_WeaponParts;
	Parms.CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames = CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames;
	Parms.CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts = CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts;
	Parms.CallFunc_Get_Type_from_WeaponCode_Weapon_Type = CallFunc_Get_Type_from_WeaponCode_Weapon_Type;

	UObject::ProcessEvent(Func, &Parms);

	if (Weapon_Type != nullptr)
		*Weapon_Type = std::move(Parms.Weapon_Type);

	if (Weapon_Parts != nullptr)
		*Weapon_Parts = std::move(Parms.Weapon_Parts);

	if (Weapon_Materials != nullptr)
		*Weapon_Materials = std::move(Parms.Weapon_Materials);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Random WeaponCode (Advanced)
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Weapon_Code                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              Optional_Parts_Weight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Random_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Random_Parts                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Random_Materials                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      WeaponCode                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Unfiltered_Weapon_Parts_Array                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      New_Weapon_Type                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Output_String                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Filtered_Weapon_Parts_Array                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames       (ReferenceParm, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts                  (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Random_Weapon_Type_Weapon_Type                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Type_from_WeaponCode_Weapon_Type                    (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue_2                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue_3                              (ZeroConstructor, HasGetValueTypeHash)
// struct FWeaponPart                 CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Random_Weapon_Part_PartString                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<enum class EMaterialSlot>   CallFunc_Get_MaterialSlots_of_WeaponType_Slots                   (ReferenceParm, HasGetValueTypeHash)
// enum class EMaterialSlot           CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMaterialSet                CallFunc_Random_MaterialSet_of_Slot_Material_Set                 (HasGetValueTypeHash)
// class FString                      CallFunc_Random_MaterialSet_of_Slot_Material_ShortName           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FWeaponPart>         Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         CallFunc_Filter_Weapon_Parts_by_Type_Parts                       (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Random_WeaponCode__Advanced_(const class FString& Weapon_Code, float Optional_Parts_Weight, bool Random_Type, bool Random_Parts, bool Random_Materials, class UObject* __WorldContext, class FString* WeaponCode, const TArray<struct FWeaponPart>& Unfiltered_Weapon_Parts_Array, const class FString& New_Weapon_Type, const class FString& Output_String, const TArray<struct FWeaponPart>& Filtered_Weapon_Parts_Array, TArray<class FString>& CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames, TArray<class FString>& CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Random_Weapon_Type_Weapon_Type, const class FString& CallFunc_Get_Type_from_WeaponCode_Weapon_Type, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, const class FString& CallFunc_SelectString_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, const class FString& CallFunc_SelectString_ReturnValue_3, const struct FWeaponPart& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Random_Weapon_Part_PartString, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TArray<enum class EMaterialSlot>& CallFunc_Get_MaterialSlots_of_WeaponType_Slots, enum class EMaterialSlot CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, const struct FMaterialSet& CallFunc_Random_MaterialSet_of_Slot_Material_Set, const class FString& CallFunc_Random_MaterialSet_of_Slot_Material_ShortName, bool CallFunc_Less_IntInt_ReturnValue_3, TArray<struct FWeaponPart>& Temp_struct_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, TArray<struct FWeaponPart>& CallFunc_Filter_Weapon_Parts_by_Type_Parts, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Random WeaponCode (Advanced)");

	Params::UModularWeaponTools_C_Random_WeaponCode__Advanced__Params Parms{};

	Parms.Weapon_Code = Weapon_Code;
	Parms.Optional_Parts_Weight = Optional_Parts_Weight;
	Parms.Random_Type = Random_Type;
	Parms.Random_Parts = Random_Parts;
	Parms.Random_Materials = Random_Materials;
	Parms.__WorldContext = __WorldContext;
	Parms.Unfiltered_Weapon_Parts_Array = Unfiltered_Weapon_Parts_Array;
	Parms.New_Weapon_Type = New_Weapon_Type;
	Parms.Output_String = Output_String;
	Parms.Filtered_Weapon_Parts_Array = Filtered_Weapon_Parts_Array;
	Parms.CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames = CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames;
	Parms.CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts = CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Random_Weapon_Type_Weapon_Type = CallFunc_Random_Weapon_Type_Weapon_Type;
	Parms.CallFunc_Get_Type_from_WeaponCode_Weapon_Type = CallFunc_Get_Type_from_WeaponCode_Weapon_Type;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_SelectString_ReturnValue_2 = CallFunc_SelectString_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_SelectString_ReturnValue_3 = CallFunc_SelectString_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Random_Weapon_Part_PartString = CallFunc_Random_Weapon_Part_PartString;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Get_MaterialSlots_of_WeaponType_Slots = CallFunc_Get_MaterialSlots_of_WeaponType_Slots;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Random_MaterialSet_of_Slot_Material_Set = CallFunc_Random_MaterialSet_of_Slot_Material_Set;
	Parms.CallFunc_Random_MaterialSet_of_Slot_Material_ShortName = CallFunc_Random_MaterialSet_of_Slot_Material_ShortName;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Filter_Weapon_Parts_by_Type_Parts = CallFunc_Filter_Weapon_Parts_by_Type_Parts;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponCode != nullptr)
		*WeaponCode = std::move(Parms.WeaponCode);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Get Num MaterialSlots of WeaponType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slots                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EMaterialSlot>   Material_Slots                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<enum class EMaterialSlot>   CallFunc_Get_MaterialSlots_of_WeaponType_Slots                   (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Get_Num_MaterialSlots_of_WeaponType(const class FString& WeaponType, class UObject* __WorldContext, int32* Slots, const TArray<enum class EMaterialSlot>& Material_Slots, TArray<enum class EMaterialSlot>& CallFunc_Get_MaterialSlots_of_WeaponType_Slots, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Get Num MaterialSlots of WeaponType");

	Params::UModularWeaponTools_C_Get_Num_MaterialSlots_of_WeaponType_Params Parms{};

	Parms.WeaponType = WeaponType;
	Parms.__WorldContext = __WorldContext;
	Parms.Material_Slots = Material_Slots;
	Parms.CallFunc_Get_MaterialSlots_of_WeaponType_Slots = CallFunc_Get_MaterialSlots_of_WeaponType_Slots;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Slots != nullptr)
		*Slots = Parms.Slots;

}


// Function ModularWeaponTools.ModularWeaponTools_C.Random Parts Strings of Type
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Weapon_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              Optional_Parts_Weight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              Weapon_Parts                                                     (Parm, OutParm, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Local_Filtered_Weapon_Parts                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Local_Weapon_Parts                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FString>              New_Parts                                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         CallFunc_Filter_Weapon_Parts_by_Type_Parts                       (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponPart                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Random_Parts_Strings_of_Type(const class FString& Weapon_Type, float Optional_Parts_Weight, class UObject* __WorldContext, TArray<class FString>* Weapon_Parts, const TArray<struct FWeaponPart>& Local_Filtered_Weapon_Parts, const TArray<struct FWeaponPart>& Local_Weapon_Parts, const TArray<class FString>& New_Parts, TArray<struct FWeaponPart>& Temp_struct_Variable, TArray<struct FWeaponPart>& CallFunc_Filter_Weapon_Parts_by_Type_Parts, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWeaponPart& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Random Parts Strings of Type");

	Params::UModularWeaponTools_C_Random_Parts_Strings_of_Type_Params Parms{};

	Parms.Weapon_Type = Weapon_Type;
	Parms.Optional_Parts_Weight = Optional_Parts_Weight;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Filtered_Weapon_Parts = Local_Filtered_Weapon_Parts;
	Parms.Local_Weapon_Parts = Local_Weapon_Parts;
	Parms.New_Parts = New_Parts;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Filter_Weapon_Parts_by_Type_Parts = CallFunc_Filter_Weapon_Parts_by_Type_Parts;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Weapon_Parts != nullptr)
		*Weapon_Parts = std::move(Parms.Weapon_Parts);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Random Materials Strings of Type
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Weapon_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              Weapon_Materials                                                 (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FString>              New_Materials                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<enum class EMaterialSlot>   CallFunc_Get_MaterialSlots_of_WeaponType_Slots                   (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMaterialSlot           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMaterialSet>        CallFunc_Get_MaterialSets_of_Slot_MaterialSets                   (ReferenceParm, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Get_MaterialSets_of_Slot_MaterialSets_ShortNames        (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Random_Materials_Strings_of_Type(const class FString& Weapon_Type, class UObject* __WorldContext, TArray<class FString>* Weapon_Materials, const TArray<class FString>& New_Materials, TArray<enum class EMaterialSlot>& CallFunc_Get_MaterialSlots_of_WeaponType_Slots, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class EMaterialSlot CallFunc_Array_Get_Item, TArray<struct FMaterialSet>& CallFunc_Get_MaterialSets_of_Slot_MaterialSets, TArray<class FString>& CallFunc_Get_MaterialSets_of_Slot_MaterialSets_ShortNames, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Random Materials Strings of Type");

	Params::UModularWeaponTools_C_Random_Materials_Strings_of_Type_Params Parms{};

	Parms.Weapon_Type = Weapon_Type;
	Parms.__WorldContext = __WorldContext;
	Parms.New_Materials = New_Materials;
	Parms.CallFunc_Get_MaterialSlots_of_WeaponType_Slots = CallFunc_Get_MaterialSlots_of_WeaponType_Slots;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Get_MaterialSets_of_Slot_MaterialSets = CallFunc_Get_MaterialSets_of_Slot_MaterialSets;
	Parms.CallFunc_Get_MaterialSets_of_Slot_MaterialSets_ShortNames = CallFunc_Get_MaterialSets_of_Slot_MaterialSets_ShortNames;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Weapon_Materials != nullptr)
		*Weapon_Materials = std::move(Parms.Weapon_Materials);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Compile WeaponCode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Weapon_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              Weapon_Parts                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<class FString>              Weapon_Materials                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      WeaponCode                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Local_WeaponCode                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Compile_WeaponCode(const class FString& Weapon_Type, TArray<class FString>& Weapon_Parts, TArray<class FString>& Weapon_Materials, class UObject* __WorldContext, class FString* WeaponCode, const class FString& Local_WeaponCode, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Compile WeaponCode");

	Params::UModularWeaponTools_C_Compile_WeaponCode_Params Parms{};

	Parms.Weapon_Type = Weapon_Type;
	Parms.Weapon_Parts = Weapon_Parts;
	Parms.Weapon_Materials = Weapon_Materials;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_WeaponCode = Local_WeaponCode;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponCode != nullptr)
		*WeaponCode = std::move(Parms.WeaponCode);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Set Material on WeaponCode
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      WeaponCode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Index_to_set                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      New_Material_ShortName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      New_WeaponCode                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              Local_Materials                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Type_from_WeaponCode_Weapon_Type                    (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts                  (ReferenceParm, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames       (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Compile_WeaponCode_WeaponCode                           (ZeroConstructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Set_Material_on_WeaponCode(const class FString& WeaponCode, int32 Index_to_set, const class FString& New_Material_ShortName, class UObject* __WorldContext, class FString* New_WeaponCode, const TArray<class FString>& Local_Materials, const class FString& CallFunc_Get_Type_from_WeaponCode_Weapon_Type, TArray<class FString>& CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts, TArray<class FString>& CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames, const class FString& CallFunc_Compile_WeaponCode_WeaponCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Set Material on WeaponCode");

	Params::UModularWeaponTools_C_Set_Material_on_WeaponCode_Params Parms{};

	Parms.WeaponCode = WeaponCode;
	Parms.Index_to_set = Index_to_set;
	Parms.New_Material_ShortName = New_Material_ShortName;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Materials = Local_Materials;
	Parms.CallFunc_Get_Type_from_WeaponCode_Weapon_Type = CallFunc_Get_Type_from_WeaponCode_Weapon_Type;
	Parms.CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts = CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts;
	Parms.CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames = CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames;
	Parms.CallFunc_Compile_WeaponCode_WeaponCode = CallFunc_Compile_WeaponCode_WeaponCode;

	UObject::ProcessEvent(Func, &Parms);

	if (New_WeaponCode != nullptr)
		*New_WeaponCode = std::move(Parms.New_WeaponCode);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Get Materials from WeaponCode
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      WeaponCode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              Material_ShortNames                                              (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FString>              Found_Mats_Array                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue_1                            (ReferenceParm, HasGetValueTypeHash)

void UModularWeaponTools_C::Get_Materials_from_WeaponCode(const class FString& WeaponCode, class UObject* __WorldContext, TArray<class FString>* Material_ShortNames, const TArray<class FString>& Found_Mats_Array, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, const class FString& CallFunc_Array_Get_Item, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Get Materials from WeaponCode");

	Params::UModularWeaponTools_C_Get_Materials_from_WeaponCode_Params Parms{};

	Parms.WeaponCode = WeaponCode;
	Parms.__WorldContext = __WorldContext;
	Parms.Found_Mats_Array = Found_Mats_Array;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ParseIntoArray_ReturnValue_1 = CallFunc_ParseIntoArray_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Material_ShortNames != nullptr)
		*Material_ShortNames = std::move(Parms.Material_ShortNames);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Get WeaponType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Weapon_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponType                 Found_Weapon_Type                                                (Parm, OutParm, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FWeaponType>         Local_Weapon_Types                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Type_found                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponType                 Local_WeaponType                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FWeaponType>         Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponType                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Get_WeaponType(const class FString& Weapon_Type, class UObject* __WorldContext, struct FWeaponType* Found_Weapon_Type, bool* Success, const TArray<struct FWeaponType>& Local_Weapon_Types, bool Type_found, const struct FWeaponType& Local_WeaponType, TArray<struct FWeaponType>& Temp_struct_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FWeaponType& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Get WeaponType");

	Params::UModularWeaponTools_C_Get_WeaponType_Params Parms{};

	Parms.Weapon_Type = Weapon_Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Weapon_Types = Local_Weapon_Types;
	Parms.Type_found = Type_found;
	Parms.Local_WeaponType = Local_WeaponType;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found_Weapon_Type != nullptr)
		*Found_Weapon_Type = std::move(Parms.Found_Weapon_Type);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ModularWeaponTools.ModularWeaponTools_C.Random MaterialSet of Slot
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMaterialSlot           Material_Slot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMaterialSet                Material_Set                                                     (Parm, OutParm, HasGetValueTypeHash)
// class FString                      Material_ShortName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FMaterialSet>        CallFunc_Get_MaterialSets_of_Slot_MaterialSets                   (ReferenceParm, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Get_MaterialSets_of_Slot_MaterialSets_ShortNames        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMaterialSet                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void UModularWeaponTools_C::Random_MaterialSet_of_Slot(enum class EMaterialSlot Material_Slot, class UObject* __WorldContext, struct FMaterialSet* Material_Set, class FString* Material_ShortName, TArray<struct FMaterialSet>& CallFunc_Get_MaterialSets_of_Slot_MaterialSets, TArray<class FString>& CallFunc_Get_MaterialSets_of_Slot_MaterialSets_ShortNames, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const struct FMaterialSet& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Random MaterialSet of Slot");

	Params::UModularWeaponTools_C_Random_MaterialSet_of_Slot_Params Parms{};

	Parms.Material_Slot = Material_Slot;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Get_MaterialSets_of_Slot_MaterialSets = CallFunc_Get_MaterialSets_of_Slot_MaterialSets;
	Parms.CallFunc_Get_MaterialSets_of_Slot_MaterialSets_ShortNames = CallFunc_Get_MaterialSets_of_Slot_MaterialSets_ShortNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Material_Set != nullptr)
		*Material_Set = std::move(Parms.Material_Set);

	if (Material_ShortName != nullptr)
		*Material_ShortName = std::move(Parms.Material_ShortName);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Get MaterialSlots of WeaponType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      WeaponType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EMaterialSlot>   Slots                                                            (Parm, OutParm, HasGetValueTypeHash)
// TArray<struct FWeaponType>         Local_Weapon_Types                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<enum class EMaterialSlot>   Material_Slots                                                   (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FWeaponType>         Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponType                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Get_MaterialSlots_of_WeaponType(const class FString& WeaponType, class UObject* __WorldContext, TArray<enum class EMaterialSlot>* Slots, const TArray<struct FWeaponType>& Local_Weapon_Types, const TArray<enum class EMaterialSlot>& Material_Slots, TArray<struct FWeaponType>& Temp_struct_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FWeaponType& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Get MaterialSlots of WeaponType");

	Params::UModularWeaponTools_C_Get_MaterialSlots_of_WeaponType_Params Parms{};

	Parms.WeaponType = WeaponType;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Weapon_Types = Local_Weapon_Types;
	Parms.Material_Slots = Material_Slots;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Slots != nullptr)
		*Slots = std::move(Parms.Slots);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Get MaterialSets of Slot
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMaterialSlot           Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMaterialSet>        MaterialSets                                                     (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FString>              MaterialSets_ShortNames                                          (Parm, OutParm, HasGetValueTypeHash)
// TArray<struct FMaterialSet>        Unfiltered_Materials                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FString>              Filtered_Material_Strings                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FMaterialSet>        Filtered_Materials                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FMaterialSet>        Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FMaterialSet>        K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMaterialSet                CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Get_MaterialSets_of_Slot(enum class EMaterialSlot Slot, class UObject* __WorldContext, TArray<struct FMaterialSet>* MaterialSets, TArray<class FString>* MaterialSets_ShortNames, const TArray<struct FMaterialSet>& Unfiltered_Materials, const TArray<class FString>& Filtered_Material_Strings, const TArray<struct FMaterialSet>& Filtered_Materials, TArray<struct FMaterialSet>& Temp_struct_Variable, TArray<struct FMaterialSet>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FMaterialSet& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Get MaterialSets of Slot");

	Params::UModularWeaponTools_C_Get_MaterialSets_of_Slot_Params Parms{};

	Parms.Slot = Slot;
	Parms.__WorldContext = __WorldContext;
	Parms.Unfiltered_Materials = Unfiltered_Materials;
	Parms.Filtered_Material_Strings = Filtered_Material_Strings;
	Parms.Filtered_Materials = Filtered_Materials;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MaterialSets != nullptr)
		*MaterialSets = std::move(Parms.MaterialSets);

	if (MaterialSets_ShortNames != nullptr)
		*MaterialSets_ShortNames = std::move(Parms.MaterialSets_ShortNames);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Random WeaponCode of same Type from WeaponCode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      WeaponCode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              Optional_Parts_Weight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      New_WeaponCode                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Type_from_WeaponCode_Weapon_Type                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Random_WeaponCode_of_Type_WeaponCode                    (ZeroConstructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Random_WeaponCode_of_same_Type_from_WeaponCode(const class FString& WeaponCode, float Optional_Parts_Weight, class UObject* __WorldContext, class FString* New_WeaponCode, const class FString& CallFunc_Get_Type_from_WeaponCode_Weapon_Type, const class FString& CallFunc_Random_WeaponCode_of_Type_WeaponCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Random WeaponCode of same Type from WeaponCode");

	Params::UModularWeaponTools_C_Random_WeaponCode_of_same_Type_from_WeaponCode_Params Parms{};

	Parms.WeaponCode = WeaponCode;
	Parms.Optional_Parts_Weight = Optional_Parts_Weight;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Get_Type_from_WeaponCode_Weapon_Type = CallFunc_Get_Type_from_WeaponCode_Weapon_Type;
	Parms.CallFunc_Random_WeaponCode_of_Type_WeaponCode = CallFunc_Random_WeaponCode_of_Type_WeaponCode;

	UObject::ProcessEvent(Func, &Parms);

	if (New_WeaponCode != nullptr)
		*New_WeaponCode = std::move(Parms.New_WeaponCode);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Get Num Variations for Weapon Part
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Weapon_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Weapon_Part_Prefix                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumVariations                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Part_found                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FWeaponPart>         Local_Weapon_Parts                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Part_Type_found                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Found_Amount                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponPart                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Get_Num_Variations_for_Weapon_Part(const class FString& Weapon_Type, const class FString& Weapon_Part_Prefix, class UObject* __WorldContext, int32* NumVariations, bool* Part_found, const TArray<struct FWeaponPart>& Local_Weapon_Parts, bool Part_Type_found, int32 Found_Amount, TArray<struct FWeaponPart>& Temp_struct_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FWeaponPart& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Get Num Variations for Weapon Part");

	Params::UModularWeaponTools_C_Get_Num_Variations_for_Weapon_Part_Params Parms{};

	Parms.Weapon_Type = Weapon_Type;
	Parms.Weapon_Part_Prefix = Weapon_Part_Prefix;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Weapon_Parts = Local_Weapon_Parts;
	Parms.Part_Type_found = Part_Type_found;
	Parms.Found_Amount = Found_Amount;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NumVariations != nullptr)
		*NumVariations = Parms.NumVariations;

	if (Part_found != nullptr)
		*Part_found = Parms.Part_found;

}


// Function ModularWeaponTools.ModularWeaponTools_C.Set Part Index on WeaponCode
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      WeaponCode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Weapon_Part_Prefix                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              New_Index                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      New_WeaponCode                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              Parts_Array                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      New_Code                                                         (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames       (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Type_from_WeaponCode_Weapon_Type                    (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts                  (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Compile_WeaponCode_WeaponCode                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_StartsWith_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UModularWeaponTools_C::Set_Part_Index_on_WeaponCode(const class FString& WeaponCode, const class FString& Weapon_Part_Prefix, int32 New_Index, class UObject* __WorldContext, class FString* New_WeaponCode, const TArray<class FString>& Parts_Array, const class FString& New_Code, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames, const class FString& CallFunc_Get_Type_from_WeaponCode_Weapon_Type, TArray<class FString>& CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Compile_WeaponCode_WeaponCode, const class FString& CallFunc_Array_Get_Item, bool CallFunc_StartsWith_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Set Part Index on WeaponCode");

	Params::UModularWeaponTools_C_Set_Part_Index_on_WeaponCode_Params Parms{};

	Parms.WeaponCode = WeaponCode;
	Parms.Weapon_Part_Prefix = Weapon_Part_Prefix;
	Parms.New_Index = New_Index;
	Parms.__WorldContext = __WorldContext;
	Parms.Parts_Array = Parts_Array;
	Parms.New_Code = New_Code;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames = CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames;
	Parms.CallFunc_Get_Type_from_WeaponCode_Weapon_Type = CallFunc_Get_Type_from_WeaponCode_Weapon_Type;
	Parms.CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts = CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Compile_WeaponCode_WeaponCode = CallFunc_Compile_WeaponCode_WeaponCode;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_StartsWith_ReturnValue = CallFunc_StartsWith_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (New_WeaponCode != nullptr)
		*New_WeaponCode = std::move(Parms.New_WeaponCode);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Get Part Index from WeaponCode
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      WeaponCode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Weapon_Part_Prefix                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Found_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts                  (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_RightChop_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_StartsWith_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UModularWeaponTools_C::Get_Part_Index_from_WeaponCode(const class FString& WeaponCode, const class FString& Weapon_Part_Prefix, class UObject* __WorldContext, int32* Index, int32 Found_Index, TArray<class FString>& CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_RightChop_ReturnValue, bool CallFunc_StartsWith_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Get Part Index from WeaponCode");

	Params::UModularWeaponTools_C_Get_Part_Index_from_WeaponCode_Params Parms{};

	Parms.WeaponCode = WeaponCode;
	Parms.Weapon_Part_Prefix = Weapon_Part_Prefix;
	Parms.__WorldContext = __WorldContext;
	Parms.Found_Index = Found_Index;
	Parms.CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts = CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_RightChop_ReturnValue = CallFunc_RightChop_ReturnValue;
	Parms.CallFunc_StartsWith_ReturnValue = CallFunc_StartsWith_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function ModularWeaponTools.ModularWeaponTools_C.Get Parts from WeaponCode
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      WeaponCode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              Weapon_Parts                                                     (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FString>              Output_Weapon_Parts                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue_1                            (ReferenceParm, HasGetValueTypeHash)

void UModularWeaponTools_C::Get_Parts_from_WeaponCode(const class FString& WeaponCode, class UObject* __WorldContext, TArray<class FString>* Weapon_Parts, const TArray<class FString>& Output_Weapon_Parts, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, const class FString& CallFunc_Array_Get_Item, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Get Parts from WeaponCode");

	Params::UModularWeaponTools_C_Get_Parts_from_WeaponCode_Params Parms{};

	Parms.WeaponCode = WeaponCode;
	Parms.__WorldContext = __WorldContext;
	Parms.Output_Weapon_Parts = Output_Weapon_Parts;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ParseIntoArray_ReturnValue_1 = CallFunc_ParseIntoArray_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Weapon_Parts != nullptr)
		*Weapon_Parts = std::move(Parms.Weapon_Parts);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Get Type from WeaponCode
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      WeaponCode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Weapon_Type                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Get_Type_from_WeaponCode(const class FString& WeaponCode, class UObject* __WorldContext, class FString* Weapon_Type, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, const class FString& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Get Type from WeaponCode");

	Params::UModularWeaponTools_C_Get_Type_from_WeaponCode_Params Parms{};

	Parms.WeaponCode = WeaponCode;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Weapon_Type != nullptr)
		*Weapon_Type = std::move(Parms.Weapon_Type);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Get Number of Part Categories for Weapon Type
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Required_Parts                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Optional_Parts                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Weapon_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Local_Weapon_Parts                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Amount_found                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponPart                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Get_Number_of_Part_Categories_for_Weapon_Type(bool Required_Parts, bool Optional_Parts, const class FString& Weapon_Type, class UObject* __WorldContext, int32* Amount, const TArray<struct FWeaponPart>& Local_Weapon_Parts, int32 Amount_found, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWeaponPart& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 Temp_int_Variable, TArray<struct FWeaponPart>& Temp_struct_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Get Number of Part Categories for Weapon Type");

	Params::UModularWeaponTools_C_Get_Number_of_Part_Categories_for_Weapon_Type_Params Parms{};

	Parms.Required_Parts = Required_Parts;
	Parms.Optional_Parts = Optional_Parts;
	Parms.Weapon_Type = Weapon_Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Weapon_Parts = Local_Weapon_Parts;
	Parms.Amount_found = Amount_found;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;

}


// Function ModularWeaponTools.ModularWeaponTools_C.Random Weapon Type
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Weapon_Type                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Available_Weapon_Types_Available_Types                  (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Random_Weapon_Type(class UObject* __WorldContext, class FString* Weapon_Type, TArray<class FString>& CallFunc_Available_Weapon_Types_Available_Types, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Random Weapon Type");

	Params::UModularWeaponTools_C_Random_Weapon_Type_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Available_Weapon_Types_Available_Types = CallFunc_Available_Weapon_Types_Available_Types;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Weapon_Type != nullptr)
		*Weapon_Type = std::move(Parms.Weapon_Type);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Random Weapon Part
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FWeaponPart                 Weapon_Part                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      PartString                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Random_Weapon_Part(const struct FWeaponPart& Weapon_Part, class UObject* __WorldContext, class FString* PartString, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Random Weapon Part");

	Params::UModularWeaponTools_C_Random_Weapon_Part_Params Parms{};

	Parms.Weapon_Part = Weapon_Part;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PartString != nullptr)
		*PartString = std::move(Parms.PartString);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Filter Weapon Parts by Type
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FWeaponPart>         Weapon_Parts                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FString                      Weapon_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Exclude_Optional_Parts                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Optional_Parts_Weight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Parts                                                            (Parm, OutParm, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Incoming_Parts_Array                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Parts_Array                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponPart                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UModularWeaponTools_C::Filter_Weapon_Parts_by_Type(TArray<struct FWeaponPart>& Weapon_Parts, const class FString& Weapon_Type, bool Exclude_Optional_Parts, float Optional_Parts_Weight, class UObject* __WorldContext, TArray<struct FWeaponPart>* Parts, const TArray<struct FWeaponPart>& Incoming_Parts_Array, const TArray<struct FWeaponPart>& Parts_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloat_ReturnValue, const struct FWeaponPart& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Filter Weapon Parts by Type");

	Params::UModularWeaponTools_C_Filter_Weapon_Parts_by_Type_Params Parms{};

	Parms.Weapon_Parts = Weapon_Parts;
	Parms.Weapon_Type = Weapon_Type;
	Parms.Exclude_Optional_Parts = Exclude_Optional_Parts;
	Parms.Optional_Parts_Weight = Optional_Parts_Weight;
	Parms.__WorldContext = __WorldContext;
	Parms.Incoming_Parts_Array = Incoming_Parts_Array;
	Parms.Parts_Array = Parts_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Parts != nullptr)
		*Parts = std::move(Parms.Parts);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Available Weapon Parts of Type
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Weapon_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Exclude_Optional_Parts                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              Available_Parts                                                  (Parm, OutParm, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Local_Weapon_Parts                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FString>              Found_Types                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponPart                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class FString                      CallFunc_ToLower_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UModularWeaponTools_C::Available_Weapon_Parts_of_Type(const class FString& Weapon_Type, bool Exclude_Optional_Parts, class UObject* __WorldContext, TArray<class FString>* Available_Parts, const TArray<struct FWeaponPart>& Local_Weapon_Parts, const TArray<class FString>& Found_Types, TArray<struct FWeaponPart>& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWeaponPart& CallFunc_Array_Get_Item, const class FString& CallFunc_ToLower_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Available Weapon Parts of Type");

	Params::UModularWeaponTools_C_Available_Weapon_Parts_of_Type_Params Parms{};

	Parms.Weapon_Type = Weapon_Type;
	Parms.Exclude_Optional_Parts = Exclude_Optional_Parts;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Weapon_Parts = Local_Weapon_Parts;
	Parms.Found_Types = Found_Types;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ToLower_ReturnValue = CallFunc_ToLower_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Available_Parts != nullptr)
		*Available_Parts = std::move(Parms.Available_Parts);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Available Weapon Types
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              Available_Types                                                  (Parm, OutParm, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Local_Weapon_Parts                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FString>              Found_Types                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponPart                 CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class FString                      CallFunc_ToLower_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UModularWeaponTools_C::Available_Weapon_Types(class UObject* __WorldContext, TArray<class FString>* Available_Types, const TArray<struct FWeaponPart>& Local_Weapon_Parts, const TArray<class FString>& Found_Types, TArray<struct FWeaponPart>& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWeaponPart& CallFunc_Array_Get_Item, const class FString& CallFunc_ToLower_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Available Weapon Types");

	Params::UModularWeaponTools_C_Available_Weapon_Types_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_Weapon_Parts = Local_Weapon_Parts;
	Parms.Found_Types = Found_Types;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ToLower_ReturnValue = CallFunc_ToLower_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Available_Types != nullptr)
		*Available_Types = std::move(Parms.Available_Types);

}


// Function ModularWeaponTools.ModularWeaponTools_C.Random WeaponCode of Type
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Weapon_Type                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              Optional_Parts_Weight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      WeaponCode                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Unfiltered_Weapon_Parts_Array                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FString                      Output_String                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Filtered_Weapon_Parts_Array                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<enum class EMaterialSlot>   CallFunc_Get_MaterialSlots_of_WeaponType_Slots                   (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMaterialSlot           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMaterialSet                CallFunc_Random_MaterialSet_of_Slot_Material_Set                 (HasGetValueTypeHash)
// class FString                      CallFunc_Random_MaterialSet_of_Slot_Material_ShortName           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeaponPart                 CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Random_Weapon_Part_PartString                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         Temp_struct_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FWeaponPart>         CallFunc_Filter_Weapon_Parts_by_Type_Parts                       (ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UModularWeaponTools_C::Random_WeaponCode_of_Type(const class FString& Weapon_Type, float Optional_Parts_Weight, class UObject* __WorldContext, class FString* WeaponCode, const TArray<struct FWeaponPart>& Unfiltered_Weapon_Parts_Array, const class FString& Output_String, const TArray<struct FWeaponPart>& Filtered_Weapon_Parts_Array, TArray<enum class EMaterialSlot>& CallFunc_Get_MaterialSlots_of_WeaponType_Slots, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, enum class EMaterialSlot CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FMaterialSet& CallFunc_Random_MaterialSet_of_Slot_Material_Set, const class FString& CallFunc_Random_MaterialSet_of_Slot_Material_ShortName, const class FString& CallFunc_SelectString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FWeaponPart& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Random_Weapon_Part_PartString, const class FString& CallFunc_SelectString_ReturnValue_1, TArray<struct FWeaponPart>& Temp_struct_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FWeaponPart>& CallFunc_Filter_Weapon_Parts_by_Type_Parts, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularWeaponTools_C", "Random WeaponCode of Type");

	Params::UModularWeaponTools_C_Random_WeaponCode_of_Type_Params Parms{};

	Parms.Weapon_Type = Weapon_Type;
	Parms.Optional_Parts_Weight = Optional_Parts_Weight;
	Parms.__WorldContext = __WorldContext;
	Parms.Unfiltered_Weapon_Parts_Array = Unfiltered_Weapon_Parts_Array;
	Parms.Output_String = Output_String;
	Parms.Filtered_Weapon_Parts_Array = Filtered_Weapon_Parts_Array;
	Parms.CallFunc_Get_MaterialSlots_of_WeaponType_Slots = CallFunc_Get_MaterialSlots_of_WeaponType_Slots;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Random_MaterialSet_of_Slot_Material_Set = CallFunc_Random_MaterialSet_of_Slot_Material_Set;
	Parms.CallFunc_Random_MaterialSet_of_Slot_Material_ShortName = CallFunc_Random_MaterialSet_of_Slot_Material_ShortName;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Random_Weapon_Part_PartString = CallFunc_Random_Weapon_Part_PartString;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Filter_Weapon_Parts_by_Type_Parts = CallFunc_Filter_Weapon_Parts_by_Type_Parts;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponCode != nullptr)
		*WeaponCode = std::move(Parms.WeaponCode);

}

}


