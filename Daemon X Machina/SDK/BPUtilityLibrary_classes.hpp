#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPUtilityLibrary.BPUtilityLibrary_C
class UBPUtilityLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPUtilityLibrary_C* GetDefaultObj();

	void SetImageToImage(class UImage* TargetImage, class UObject* Image, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1);
	void IsSupportWeapon(class FName RowName, class UObject* __WorldContext, bool* Result, const struct FTTLSupportWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void SetWeaponVisibility(bool IsVisible, bool IsLeft, class AActor* TargetPawn, class UObject* __WorldContext, class ATTLCharacterCommon* K2Node_DynamicCast_AsTTLCharacter_Common, bool K2Node_DynamicCast_bSuccess);
	void GetButtonImage(const struct FSlateBrush& ButtonStyle, class UObject* __WorldContext, class UImage** Image, class UImage* K2Node_DynamicCast_AsImage, bool K2Node_DynamicCast_bSuccess);
	void GetButtonMaterial(const struct FSlateBrush& ButtonStyle, class UObject* __WorldContext, class UMaterialInstanceDynamic** Material, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess);
	void CreateButtonDynamicMaterial(class UButton* Button, class UObject* __WorldContext, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface1, bool K2Node_DynamicCast_bSuccess1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle);
	void GetPartsName(const struct FTTLAssemblePartsInfoRow& PartsInfo, class UObject* __WorldContext, class FName* PartsName, const struct FTTLPartsHeadParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTTLSupportWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow1, bool CallFunc_GetDataTableRowFromName_ReturnValue1, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow2, bool CallFunc_GetDataTableRowFromName_ReturnValue2, const struct FTTLMissileWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow3, bool CallFunc_GetDataTableRowFromName_ReturnValue3, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow4, bool CallFunc_GetDataTableRowFromName_ReturnValue4, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow5, bool CallFunc_GetDataTableRowFromName_ReturnValue5, const struct FTTLPartsInsideParamRow& CallFunc_GetDataTableRowFromName_OutRow6, bool CallFunc_GetDataTableRowFromName_ReturnValue6, const struct FTTLPartsLegsParamRow& CallFunc_GetDataTableRowFromName_OutRow7, bool CallFunc_GetDataTableRowFromName_ReturnValue7, const struct FTTLPartsArmRightParamRow& CallFunc_GetDataTableRowFromName_OutRow8, bool CallFunc_GetDataTableRowFromName_ReturnValue8, const struct FTTLPartsArmLeftParamRow& CallFunc_GetDataTableRowFromName_OutRow9, bool CallFunc_GetDataTableRowFromName_ReturnValue9, const struct FTTLPartsBodyParamRow& CallFunc_GetDataTableRowFromName_OutRow10, bool CallFunc_GetDataTableRowFromName_ReturnValue10);
	void SetEnabledLockOn(bool NewEnable, class AActor* TargetActor, class UObject* __WorldContext, class FName LockOnTag, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue1);
	void GetWeaponClass(class FName RowName, class UObject* __WorldContext, class UClass** Actor, const struct FTTLSupportWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FTTLMissileWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow1, bool CallFunc_GetDataTableRowFromName_ReturnValue1, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_ClassDynamicCast_AsActor1, bool K2Node_ClassDynamicCast_bSuccess1, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow2, bool CallFunc_GetDataTableRowFromName_ReturnValue2, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow3, bool CallFunc_GetDataTableRowFromName_ReturnValue3, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue2, class UClass* CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue3, class UClass* K2Node_ClassDynamicCast_AsActor2, bool K2Node_ClassDynamicCast_bSuccess2, class UClass* K2Node_ClassDynamicCast_AsActor3, bool K2Node_ClassDynamicCast_bSuccess3);
	void IsShoulderWeapon(class FName RowName, class UObject* __WorldContext, bool* Result, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FTTLMissileWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow1, bool CallFunc_GetDataTableRowFromName_ReturnValue1);
	void IsCloseRangeWeapon(class FName RowName, class UObject* __WorldContext, bool* Result, const struct FTTLCloseRangeWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void IsWeapon(class FName RowName, class UObject* __WorldContext, bool* Result, const struct FTTLWeaponParamRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void GetGameInstance(class AActor* Object, class UObject* __WorldContext, class UTurtleGameInstance_C** Result, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UTurtleGameInstance_C* K2Node_DynamicCast_AsTurtle_Game_Instance, bool K2Node_DynamicCast_bSuccess);
};

}


