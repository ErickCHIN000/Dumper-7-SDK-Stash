#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ModularWeaponTools.ModularWeaponTools_C
class UModularWeaponTools_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModularWeaponTools_C* GetDefaultObj();

	void Decompile_WeaponCode(const class FString& Weapon_Code, class UObject* __WorldContext, class FString* Weapon_Type, TArray<class FString>* Weapon_Parts, TArray<class FString>* Weapon_Materials, const TArray<class FString>& Local_WeaponMats, const TArray<class FString>& Local_WeaponParts, TArray<class FString>& CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames, TArray<class FString>& CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts, const class FString& CallFunc_Get_Type_from_WeaponCode_Weapon_Type);
	void Random_WeaponCode__Advanced_(const class FString& Weapon_Code, float Optional_Parts_Weight, bool Random_Type, bool Random_Parts, bool Random_Materials, class UObject* __WorldContext, class FString* WeaponCode, const TArray<struct FWeaponPart>& Unfiltered_Weapon_Parts_Array, const class FString& New_Weapon_Type, const class FString& Output_String, const TArray<struct FWeaponPart>& Filtered_Weapon_Parts_Array, TArray<class FString>& CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames, TArray<class FString>& CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_Random_Weapon_Type_Weapon_Type, const class FString& CallFunc_Get_Type_from_WeaponCode_Weapon_Type, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, const class FString& CallFunc_SelectString_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, const class FString& CallFunc_SelectString_ReturnValue_3, const struct FWeaponPart& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Random_Weapon_Part_PartString, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TArray<enum class EMaterialSlot>& CallFunc_Get_MaterialSlots_of_WeaponType_Slots, enum class EMaterialSlot CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, const struct FMaterialSet& CallFunc_Random_MaterialSet_of_Slot_Material_Set, const class FString& CallFunc_Random_MaterialSet_of_Slot_Material_ShortName, bool CallFunc_Less_IntInt_ReturnValue_3, TArray<struct FWeaponPart>& Temp_struct_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, TArray<struct FWeaponPart>& CallFunc_Filter_Weapon_Parts_by_Type_Parts, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7);
	void Get_Num_MaterialSlots_of_WeaponType(const class FString& WeaponType, class UObject* __WorldContext, int32* Slots, const TArray<enum class EMaterialSlot>& Material_Slots, TArray<enum class EMaterialSlot>& CallFunc_Get_MaterialSlots_of_WeaponType_Slots, int32 CallFunc_Array_Length_ReturnValue);
	void Random_Parts_Strings_of_Type(const class FString& Weapon_Type, float Optional_Parts_Weight, class UObject* __WorldContext, TArray<class FString>* Weapon_Parts, const TArray<struct FWeaponPart>& Local_Filtered_Weapon_Parts, const TArray<struct FWeaponPart>& Local_Weapon_Parts, const TArray<class FString>& New_Parts, TArray<struct FWeaponPart>& Temp_struct_Variable, TArray<struct FWeaponPart>& CallFunc_Filter_Weapon_Parts_by_Type_Parts, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWeaponPart& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Random_Materials_Strings_of_Type(const class FString& Weapon_Type, class UObject* __WorldContext, TArray<class FString>* Weapon_Materials, const TArray<class FString>& New_Materials, TArray<enum class EMaterialSlot>& CallFunc_Get_MaterialSlots_of_WeaponType_Slots, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class EMaterialSlot CallFunc_Array_Get_Item, TArray<struct FMaterialSet>& CallFunc_Get_MaterialSets_of_Slot_MaterialSets, TArray<class FString>& CallFunc_Get_MaterialSets_of_Slot_MaterialSets_ShortNames, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Compile_WeaponCode(const class FString& Weapon_Type, TArray<class FString>& Weapon_Parts, TArray<class FString>& Weapon_Materials, class UObject* __WorldContext, class FString* WeaponCode, const class FString& Local_WeaponCode, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void Set_Material_on_WeaponCode(const class FString& WeaponCode, int32 Index_to_set, const class FString& New_Material_ShortName, class UObject* __WorldContext, class FString* New_WeaponCode, const TArray<class FString>& Local_Materials, const class FString& CallFunc_Get_Type_from_WeaponCode_Weapon_Type, TArray<class FString>& CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts, TArray<class FString>& CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames, const class FString& CallFunc_Compile_WeaponCode_WeaponCode);
	void Get_Materials_from_WeaponCode(const class FString& WeaponCode, class UObject* __WorldContext, TArray<class FString>* Material_ShortNames, const TArray<class FString>& Found_Mats_Array, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, const class FString& CallFunc_Array_Get_Item, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_1);
	void Get_WeaponType(const class FString& Weapon_Type, class UObject* __WorldContext, struct FWeaponType* Found_Weapon_Type, bool* Success, const TArray<struct FWeaponType>& Local_Weapon_Types, bool Type_found, const struct FWeaponType& Local_WeaponType, TArray<struct FWeaponType>& Temp_struct_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FWeaponType& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Random_MaterialSet_of_Slot(enum class EMaterialSlot Material_Slot, class UObject* __WorldContext, struct FMaterialSet* Material_Set, class FString* Material_ShortName, TArray<struct FMaterialSet>& CallFunc_Get_MaterialSets_of_Slot_MaterialSets, TArray<class FString>& CallFunc_Get_MaterialSets_of_Slot_MaterialSets_ShortNames, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const struct FMaterialSet& CallFunc_Array_Get_Item);
	void Get_MaterialSlots_of_WeaponType(const class FString& WeaponType, class UObject* __WorldContext, TArray<enum class EMaterialSlot>* Slots, const TArray<struct FWeaponType>& Local_Weapon_Types, const TArray<enum class EMaterialSlot>& Material_Slots, TArray<struct FWeaponType>& Temp_struct_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FWeaponType& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Get_MaterialSets_of_Slot(enum class EMaterialSlot Slot, class UObject* __WorldContext, TArray<struct FMaterialSet>* MaterialSets, TArray<class FString>* MaterialSets_ShortNames, const TArray<struct FMaterialSet>& Unfiltered_Materials, const TArray<class FString>& Filtered_Material_Strings, const TArray<struct FMaterialSet>& Filtered_Materials, TArray<struct FMaterialSet>& Temp_struct_Variable, TArray<struct FMaterialSet>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FMaterialSet& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void Random_WeaponCode_of_same_Type_from_WeaponCode(const class FString& WeaponCode, float Optional_Parts_Weight, class UObject* __WorldContext, class FString* New_WeaponCode, const class FString& CallFunc_Get_Type_from_WeaponCode_Weapon_Type, const class FString& CallFunc_Random_WeaponCode_of_Type_WeaponCode);
	void Get_Num_Variations_for_Weapon_Part(const class FString& Weapon_Type, const class FString& Weapon_Part_Prefix, class UObject* __WorldContext, int32* NumVariations, bool* Part_found, const TArray<struct FWeaponPart>& Local_Weapon_Parts, bool Part_Type_found, int32 Found_Amount, TArray<struct FWeaponPart>& Temp_struct_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FWeaponPart& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue);
	void Set_Part_Index_on_WeaponCode(const class FString& WeaponCode, const class FString& Weapon_Part_Prefix, int32 New_Index, class UObject* __WorldContext, class FString* New_WeaponCode, const TArray<class FString>& Parts_Array, const class FString& New_Code, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_Get_Materials_from_WeaponCode_Material_ShortNames, const class FString& CallFunc_Get_Type_from_WeaponCode_Weapon_Type, TArray<class FString>& CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Compile_WeaponCode_WeaponCode, const class FString& CallFunc_Array_Get_Item, bool CallFunc_StartsWith_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Get_Part_Index_from_WeaponCode(const class FString& WeaponCode, const class FString& Weapon_Part_Prefix, class UObject* __WorldContext, int32* Index, int32 Found_Index, TArray<class FString>& CallFunc_Get_Parts_from_WeaponCode_Weapon_Parts, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_RightChop_ReturnValue, bool CallFunc_StartsWith_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Get_Parts_from_WeaponCode(const class FString& WeaponCode, class UObject* __WorldContext, TArray<class FString>* Weapon_Parts, const TArray<class FString>& Output_Weapon_Parts, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, const class FString& CallFunc_Array_Get_Item, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue_1);
	void Get_Type_from_WeaponCode(const class FString& WeaponCode, class UObject* __WorldContext, class FString* Weapon_Type, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, const class FString& CallFunc_Array_Get_Item);
	void Get_Number_of_Part_Categories_for_Weapon_Type(bool Required_Parts, bool Optional_Parts, const class FString& Weapon_Type, class UObject* __WorldContext, int32* Amount, const TArray<struct FWeaponPart>& Local_Weapon_Parts, int32 Amount_found, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWeaponPart& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 Temp_int_Variable, TArray<struct FWeaponPart>& Temp_struct_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1);
	void Random_Weapon_Type(class UObject* __WorldContext, class FString* Weapon_Type, TArray<class FString>& CallFunc_Available_Weapon_Types_Available_Types, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Array_Get_Item);
	void Random_Weapon_Part(const struct FWeaponPart& Weapon_Part, class UObject* __WorldContext, class FString* PartString, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void Filter_Weapon_Parts_by_Type(TArray<struct FWeaponPart>& Weapon_Parts, const class FString& Weapon_Type, bool Exclude_Optional_Parts, float Optional_Parts_Weight, class UObject* __WorldContext, TArray<struct FWeaponPart>* Parts, const TArray<struct FWeaponPart>& Incoming_Parts_Array, const TArray<struct FWeaponPart>& Parts_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloat_ReturnValue, const struct FWeaponPart& CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2);
	void Available_Weapon_Parts_of_Type(const class FString& Weapon_Type, bool Exclude_Optional_Parts, class UObject* __WorldContext, TArray<class FString>* Available_Parts, const TArray<struct FWeaponPart>& Local_Weapon_Parts, const TArray<class FString>& Found_Types, TArray<struct FWeaponPart>& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWeaponPart& CallFunc_Array_Get_Item, const class FString& CallFunc_ToLower_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void Available_Weapon_Types(class UObject* __WorldContext, TArray<class FString>* Available_Types, const TArray<struct FWeaponPart>& Local_Weapon_Parts, const TArray<class FString>& Found_Types, TArray<struct FWeaponPart>& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWeaponPart& CallFunc_Array_Get_Item, const class FString& CallFunc_ToLower_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void Random_WeaponCode_of_Type(const class FString& Weapon_Type, float Optional_Parts_Weight, class UObject* __WorldContext, class FString* WeaponCode, const TArray<struct FWeaponPart>& Unfiltered_Weapon_Parts_Array, const class FString& Output_String, const TArray<struct FWeaponPart>& Filtered_Weapon_Parts_Array, TArray<enum class EMaterialSlot>& CallFunc_Get_MaterialSlots_of_WeaponType_Slots, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, enum class EMaterialSlot CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FMaterialSet& CallFunc_Random_MaterialSet_of_Slot_Material_Set, const class FString& CallFunc_Random_MaterialSet_of_Slot_Material_ShortName, const class FString& CallFunc_SelectString_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FWeaponPart& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_Random_Weapon_Part_PartString, const class FString& CallFunc_SelectString_ReturnValue_1, TArray<struct FWeaponPart>& Temp_struct_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FWeaponPart>& CallFunc_Filter_Weapon_Parts_by_Type_Parts, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
};

}


