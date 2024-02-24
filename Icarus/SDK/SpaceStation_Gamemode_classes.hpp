#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E0 (0x4E8 - 0x308)
// BlueprintGeneratedClass SpaceStation_Gamemode.SpaceStation_Gamemode_C
class ASpaceStation_Gamemode_C : public AIcarusGameModeBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         InProgress;                                        // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2EB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                HostName;                                          // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                ProspectRow;                                       // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        EpochTime;                                         // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFProspectServerInfo                  SessionProspectInfo;                               // 0x348(0x19B)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2ECB[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ASpaceStation_Gamemode_C* GetDefaultObj();

	void RequestSessionSettings();
	void UpdateProspectInfo();
	void ExecuteUbergraph_SpaceStation_Gamemode(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetSessionSettings_NumConnections, int32 CallFunc_GetSessionSettings_NumPrivateConnections, bool CallFunc_GetSessionSettings_bIsLAN, bool CallFunc_GetSessionSettings_bIsDedicated, bool CallFunc_GetSessionSettings_bAllowInvites, bool CallFunc_GetSessionSettings_bAllowJoinInProgress, bool CallFunc_GetSessionSettings_bIsAnticheatEnabled, int32 CallFunc_GetSessionSettings_BuildUniqueID, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetSessionSettings_ExtraSettings, enum class EBlueprintResultSwitch CallFunc_GetSessionSettings_Result, bool K2Node_SwitchEnum_CmpSuccess, const struct FProspectInfo& CallFunc_MakeProspectInfoFromExtraSettings_ReturnValue, const struct FFProspectServerInfo& K2Node_MakeStruct_FProspectServerInfo, TArray<class ABP_IcarusPlayerControllerSpace_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_IcarusPlayerControllerSpace_C* CallFunc_Array_Get_Item, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


