#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// Function wid_PDA_Map_QuestInfo.wid_PDA_Map_QuestInfo_C.UpdateText
struct UWid_PDA_Map_QuestInfo_C_UpdateText_Params
{
public:
	struct FDescriptionInfo                      QuestInfo;                                         // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CallFunc_FormatText_Output;                        // 0x58(0x18)(None)
};

// 0x299 (0x299 - 0x0)
// Function wid_PDA_Map_QuestInfo.wid_PDA_Map_QuestInfo_C.Update
struct UWid_PDA_Map_QuestInfo_C_Update_Params
{
public:
	TArray<enum class EEventMap>                 DisableOnMaps;                                     // 0x0(0x10)(Edit, BlueprintVisible)
	enum class EEventMap                         CurrentMap;                                        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D27[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FActiveQuestInfo                      ActiveQuest;                                       // 0x14(0x18)(Edit, BlueprintVisible, NoDestructor)
	uint8                                        Pad_1D29[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EEventMap>                 K2Node_MakeArray_Array;                            // 0x30(0x10)(ReferenceParm)
	class UCustomGameInstance*                   CallFunc_GetCGGameInstanceBase_ReturnValue;        // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCustomGameInstance*                   CallFunc_GetCGGameInstanceBase_ReturnValue_1;      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestInfoInput                       CallFunc_GetQuestInfoBP_ReturnValue;               // 0x50(0x150)(None)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDescriptionInfo                      CallFunc_GetQuestDescription_ReturnValue;          // 0x1A8(0x58)(None)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D46[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AMainPawnCpp*                          CallFunc_GetCGPawnBase_ReturnValue;                // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D5F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetCurrentPersistantLevel_ReturnValue;    // 0x214(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEventMap                         CallFunc_GetMapEnumByName_ReturnValue;             // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue;              // 0x230(0x50)(None)
	struct FActiveQuestInfo                      CallFunc_Map_Find_Value;                           // 0x280(0x18)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function wid_PDA_Map_QuestInfo.wid_PDA_Map_QuestInfo_C.ExecuteUbergraph_wid_PDA_Map_QuestInfo
struct UWid_PDA_Map_QuestInfo_C_ExecuteUbergraph_wid_PDA_Map_QuestInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


