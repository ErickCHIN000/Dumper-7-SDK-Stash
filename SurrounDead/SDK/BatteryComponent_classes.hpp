#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC0 - 0xB8)
// BlueprintGeneratedClass BatteryComponent.BatteryComponent_C
class UBatteryComponent_C : public UBaseComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBatteryComponent_C* GetDefaultObj();

	void CheckBatteryLevel(class UBP_JigMultiplayer_C* JigComp, int32 UID, bool* Battery_, const struct FContainerPickupsInfo& CallFunc_GetItemByUID_Item, bool CallFunc_GetItemByUID_Found, bool CallFunc_GetItemByUID_InMainContainer_, bool CallFunc_GetContainerItemByInContainerIndex_Found_, const struct FContainerPickupsInfo& CallFunc_GetContainerItemByInContainerIndex_FoundItem, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_DoubleDouble_ReturnValue);
	void UseBattery(class UBP_JigMultiplayer_C* JigComp, int32 UID, double MinusDur, double* NewDur, bool* Successful_, const struct FContainerPickupsInfo& CallFunc_GetItemByUID_Item, bool CallFunc_GetItemByUID_Found, bool CallFunc_GetItemByUID_InMainContainer_, bool CallFunc_GetContainerItemByInContainerIndex_Found_, const struct FContainerPickupsInfo& CallFunc_GetContainerItemByInContainerIndex_FoundItem, double CallFunc_ServerFunc_UpdateDurabilityByUID_Item_NewDur);
	void Svr_Initialise();
	void ExecuteUbergraph_BatteryComponent(int32 EntryPoint);
};

}


