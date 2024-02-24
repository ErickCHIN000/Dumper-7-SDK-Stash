#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xB8 - 0xA0)
// Class PlayerPositionsRuntime.PlayerPositionsComponent
class UPlayerPositionsComponent : public UActorComponent
{
public:
	uint8                                        Pad_120E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPlayerPosition>               PlayerPositions;                                   // 0xA8(0x10)(Net, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlayerPositionsComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class PlayerPositionsRuntime.PlayerPositionsConsumer
class IPlayerPositionsConsumer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPlayerPositionsConsumer* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class PlayerPositionsRuntime.PlayerPositionsSubsystem
class UPlayerPositionsSubsystem : public UNWXWorldSubsystem
{
public:
	uint8                                        Pad_1246[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayerPositionsSubsystem* GetDefaultObj();

};

}


