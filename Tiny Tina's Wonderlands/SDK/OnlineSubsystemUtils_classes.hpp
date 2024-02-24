#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x70 - 0x68)
// Class OnlineSubsystemUtils.BeaconChannel
class UBeaconChannel : public UChannel
{
public:
	uint8                                        Pad_3[0x8];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBeaconChannel* GetDefaultObj();

};

// 0x58 (0x88 - 0x30)
// Class OnlineSubsystemUtils.DownloadableContentData
class UDownloadableContentData : public UGbxDataAsset
{
public:
	bool                                         bIgnoreEntitelementsForTravel;                     // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UDownloadablePackageData*              PackageData;                                       // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDownloadableContentLicenseData*       LicenseData;                                       // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32                                       ContentId;                                         // 0x48(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ContentDisplayName;                                // 0x50(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class FName                                  DLCIdentifier;                                     // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  NewDLCDisplayName;                                 // 0x70(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadableContentData* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class OnlineSubsystemUtils.DownloadableContentLicenseData
class UDownloadableContentLicenseData : public UGbxDataAsset
{
public:
	class UDownloadablePackageData*              PackageData;                                       // 0x30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LicenseName;                                       // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  DisplayName;                                       // 0x40(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint32                                       LicenseId;                                         // 0x58(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9[0x4];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDownloadableContentLicenseData* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class OnlineSubsystemUtils.DownloadablePackageData
class UDownloadablePackageData : public UPrimaryDataAsset
{
public:
	uint32                                       PackageId;                                         // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PackageDisplayName;                                // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DLCName;                                           // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UDownloadableContentLicenseData*> Licenses;                                          // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D[0x8];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDownloadablePackageData* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class OnlineSubsystemUtils.DownloadablePackageLicenseItem
class UDownloadablePackageLicenseItem : public UDataAsset
{
public:
	uint32                                       LicenseMask;                                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E[0x4];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDownloadablePackageLicenseItem* GetDefaultObj();

};

// 0x38 (0x578 - 0x540)
// Class OnlineSubsystemUtils.IpNetDriver
class UIpNetDriver : public UNetDriver
{
public:
	uint8                                        Pad_F[0x8];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        LogPortUnreach : 1;                                // Mask: 0x1, PropSize: 0x10x548(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AllowPlayerPortUnreach : 1;                        // Mask: 0x2, PropSize: 0x10x548(0x1)(Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_0 : 6;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_10[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       MaxPortCountToTry;                                 // 0x54C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11[0x28];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIpNetDriver* GetDefaultObj();

};

// 0x0 (0x578 - 0x578)
// Class OnlineSubsystemUtils.IpBeaconNetDriver
class UIpBeaconNetDriver : public UIpNetDriver
{
public:

	static class UClass* StaticClass();
	static class UIpBeaconNetDriver* GetDefaultObj();

};

// 0x30 (0x19A0 - 0x1970)
// Class OnlineSubsystemUtils.IpConnection
class UIpConnection : public UNetConnection
{
public:
	uint8                                        Pad_13[0x28];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TravelTimeout;                                     // 0x1998(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UIpConnection* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class OnlineSubsystemUtils.OnlineBeacon
class UOnlineBeacon : public UObject
{
public:
	uint8                                        Pad_15[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BeaconConnectionInitialTimeout;                    // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BeaconConnectionTimeout;                           // 0x3C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  NetDriverName;                                     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNetDriver*                            NetDriver;                                         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_16[0x78];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnlineBeacon* GetDefaultObj();

};

// 0xD0 (0x198 - 0xC8)
// Class OnlineSubsystemUtils.OnlineBeaconClient
class UOnlineBeaconClient : public UOnlineBeacon
{
public:
	class UNetConnection*                        BeaconConnection;                                  // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EBeaconConnectionState            ConnectionState;                                   // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17[0xC7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnlineBeaconClient* GetDefaultObj();

};

// 0xA8 (0x170 - 0xC8)
// Class OnlineSubsystemUtils.OnlineBeaconHost
class UOnlineBeaconHost : public UOnlineBeacon
{
public:
	int32                                        ListenPort;                                        // 0xC8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxAllowedRemotePlayers;                           // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A[0xA0];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnlineBeaconHost* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:
	uint8                                        Pad_1B[0xB8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnlineEngineInterfaceImpl* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class OnlineSubsystemUtils.OnlinePIESettings
class UOnlinePIESettings : public UDeveloperSettings
{
public:
	bool                                         bOnlinePIEEnabled;                                 // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPIELoginSettingsInternal>     Logins;                                            // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOnlinePIESettings* GetDefaultObj();

};

// 0x170 (0x198 - 0x28)
// Class OnlineSubsystemUtils.OnlineSessionClient
class UOnlineSessionClient : public UOnlineSession
{
public:
	uint8                                        Pad_22[0x168];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsFromInvite;                                     // 0x190(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHandlingDisconnect;                               // 0x191(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_23[0x6];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UOnlineSessionClient* GetDefaultObj();

};

// 0x10 (0x660 - 0x650)
// Class OnlineSubsystemUtils.VoipListenerSynthComponent
class UVoipListenerSynthComponent : public USynthComponent
{
public:
	uint8                                        Pad_28[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVoipListenerSynthComponent* GetDefaultObj();

	bool IsIdling();
};

}


